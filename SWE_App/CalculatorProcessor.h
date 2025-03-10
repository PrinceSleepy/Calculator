#pragma once
#include "wx/wx.h"

class CalculatorProcessor
{
	static CalculatorProcessor* instancePtr;
	bool mError = false;

	CalculatorProcessor();

public:
	
	CalculatorProcessor(const CalculatorProcessor& obj) = delete;
	
	static CalculatorProcessor* GetInstance();
	wxString Calculate(wxString string);

	int CheckPrecedence(char Operator);

	float DoOperation(float a, float b, char Operator);
};

