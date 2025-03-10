#include<wx/tokenzr.h>
#include<list>
#include "CalculatorProcessor.h"

CalculatorProcessor* CalculatorProcessor::instancePtr = nullptr;

CalculatorProcessor::CalculatorProcessor()
{

}

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (instancePtr == nullptr)
	{
		instancePtr = new CalculatorProcessor();
		return instancePtr;
	}
	else
	return instancePtr;
}

wxString CalculatorProcessor::Calculate(wxString stringToCalculate)
{
	float result = 0;
	//bool error = false;
	mError = false;

	//loop through string to get erase the 2 extra letters in trig functions
	for (auto iter = stringToCalculate.begin(); iter != stringToCalculate.end();)
	{
		if (*iter == 'S' || *iter == 'C' || *iter == 'T')
		{
			iter = stringToCalculate.erase(iter + 1);
			iter = stringToCalculate.erase(iter);
		}
		else
			++iter;
	}
	//Create tokenizer using the string from text Box and the operator for delimiter
	wxStringTokenizer tokenizer(stringToCalculate, " ");
	std::list<float> outputQueue; //First In First Out
	std::list<char> operatorStack; //First In Last Out
	char lastOperator = 0;


	while (tokenizer.HasMoreTokens())
	{

		wxString token = tokenizer.GetNextToken();
		double num;

		if (token.ToDouble(&num))
		{
			outputQueue.push_front(num);
			lastOperator = 0;
		}
		else
		{
			char op = token[0];

			if (op == 'S' || op == 'C' || op == 'T')
			{
				if (tokenizer.HasMoreTokens())
				{
					wxString nextToken = tokenizer.GetNextToken();
					if (nextToken.ToDouble(&num))
					{
						float trigValue = 0;
						if (op == 'S')
							trigValue = sin(num);
						else if (op == 'C')
							trigValue = cos(num);
						else if (op == 'T')
							trigValue = tan(num);
						outputQueue.push_front(trigValue);
						lastOperator = 0;
					}
					else
					{
						mError = true;
						break;
					}
				}
				else
				{
					mError = true;
					break;
				}
			}
			else
			{
				char op = token[0];
				if (lastOperator && !isdigit(lastOperator))
				{
					mError = true;
					break;
				}
				lastOperator = op;
				while (!operatorStack.empty() && CheckPrecedence(operatorStack.front()) >= CheckPrecedence(op))
				{
					if (outputQueue.size() < 2)
					{
						mError = true;
						break;
					}
					float b = outputQueue.front();
					outputQueue.pop_front();

					float a = outputQueue.front();
					outputQueue.pop_front();

					char Operator = operatorStack.front();
					operatorStack.pop_front();

					outputQueue.push_front(DoOperation(a, b, Operator));
				}
				if (!mError)
				operatorStack.push_front(op);
			}
		}
	}
		while (!operatorStack.empty())
		{
			if (outputQueue.size() < 2)
			{
				mError = true;
				break;
			}
			float b = outputQueue.front();
			outputQueue.pop_front();
			float a = outputQueue.front();
			outputQueue.pop_front();
			char Operator = operatorStack.front();
			operatorStack.pop_front();
			outputQueue.push_front(DoOperation(a, b, Operator));
		}
	
		if (!outputQueue.empty() && !mError)
		{
			result = outputQueue.front();
			outputQueue.pop_front();
		}
		else
		{
			mError = true;
		}


		wxString resultString;
		if (mError)
			resultString = "INVALID INPUT";
		else
		{
			//append the the textbox to display result
			 resultString = wxString::Format(wxT("%f"), result);
		}
		return resultString;
	
}

int CalculatorProcessor::CheckPrecedence(char Operator)
{
	if (Operator == '+' || Operator == '-')
		return 1;
	if (Operator == '*' || Operator == '/' || Operator == '%')
		return 2;
	return 0;
}



	float CalculatorProcessor::DoOperation(float a, float b, char Operator)
{
		if (Operator == '/' && b == 0)
		{
			mError = true;
			return 0;
		}
		if (Operator == '%' && b == 0)
		{
			mError = true;
			return 0;
		}
	switch (Operator)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
			return a / b;
	case '%':
			return std::fmod(a, b);
	default:
		return 0;
	}
}


