#include "pch.h"
#include "wx/wx.h"
#include "CppUnitTest.h"
#include "../SWE_App/CalculatorProcessor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SWEAppTests
{
	TEST_CLASS(SWEAppTests)
	{
	public:
		
		TEST_METHOD(OrderofOpsTest1)
		{
			CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
			wxString resultString = "209.250000";
			Assert::IsTrue(resultString == processorSingleton->Calculate("6 + 3 * 68 - 3 / 4"));
		}

		TEST_METHOD(RepeatingOperators)
		{
			CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
			wxString resultString = "INVALID INPUT";
			Assert::IsTrue(resultString == processorSingleton->Calculate("3 + + * 7"));
		}

		TEST_METHOD(NoNumbers)
		{
			CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
			wxString resultString = "INVALID INPUT";
			Assert::IsTrue(resultString == processorSingleton->Calculate("asdfasdf"));
		}

		TEST_METHOD(DivideByZero)
		{
			CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
			wxString resultString = "INVALID INPUT";
			Assert::IsTrue(resultString == processorSingleton->Calculate("50 / 0"));
		}

		TEST_METHOD(ModByZero)
		{
			CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
			wxString resultString = "INVALID INPUT";
			Assert::IsTrue(resultString == processorSingleton->Calculate("34 % 0"));
		}

		TEST_METHOD(NumbersAndLetters)
		{
			CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
			wxString resultString = "INVALID INPUT";
			Assert::IsTrue(resultString == processorSingleton->Calculate("7 + 5 * 90x"));
		}

		TEST_METHOD(Negation)
		{
			CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
			float result = -5 + 6;
			wxString resultString = wxString::Format(wxT("%f"), result);
			Assert::IsTrue(resultString == processorSingleton->Calculate("-5 + 6"));
		}

		TEST_METHOD(SinOrderOfOps)
		{
			CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
			float result = sin(85) - 5 * 92;
			wxString resultString = wxString::Format(wxT("%f"), result);
			Assert::IsTrue(resultString == processorSingleton->Calculate("SIN 85 - 5 * 92"));
		}

		TEST_METHOD(DecimalMath)
		{
			CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
			float result = 794.2365 - 78.899 / 34;
			wxString resultString = wxString::Format(wxT("%f"), result);
			Assert::IsTrue(resultString == processorSingleton->Calculate("794.2365 - 78.899 / 34"));
		}

		TEST_METHOD(MultipleDecimals)
		{
			CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
			wxString resultString = "INVALID INPUT";
			Assert::IsTrue(resultString == processorSingleton->Calculate("8..2 / 9"));
		}
	};
}
