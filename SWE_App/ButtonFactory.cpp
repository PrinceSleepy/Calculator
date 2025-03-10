#include "ButtonFactory.h"

ButtonFactory::ButtonFactory()
{
}

wxButton* ButtonFactory::GetSinButton()
{
	return buttonSin;
}

wxButton* ButtonFactory::GetCosButton()
{
	return buttonCos;
}

wxButton* ButtonFactory::GetTanButton()
{
	return buttonTan;
}

wxButton* ButtonFactory::GetClearButton()
{
	return buttonClear;
}

wxButton* ButtonFactory::Get7Button()
{
	return button7;
}

wxButton* ButtonFactory::Get8Button()
{
	return button8;
}

wxButton* ButtonFactory::Get9Button()
{
	return button9;
}

wxButton* ButtonFactory::GetPlusButton()
{
	return buttonPlus;
}

wxButton* ButtonFactory::Get4Button()
{
	return button4;
}

wxButton* ButtonFactory::Get5Button()
{
	return button5;
}

wxButton* ButtonFactory::Get6Button()
{
	return button6;
}

wxButton* ButtonFactory::GetSubtractButton()
{
	return buttonSubtract;
}

wxButton* ButtonFactory::Get1Button()
{
	return button1;
}

wxButton* ButtonFactory::Get2Button()
{
	return button2;
}

wxButton* ButtonFactory::Get3Button()
{
	return button3;
}

wxButton* ButtonFactory::GetMultiplyButton()
{
	return buttonMultiply;
}

wxButton* ButtonFactory::GetNegButton()
{
	return buttonNeg;
}

wxButton* ButtonFactory::Get0Button()
{
	return button0;
}

wxButton* ButtonFactory::GetDecimalButton()
{
	return buttonDecimal;
}

wxButton* ButtonFactory::GetDivideButton()
{
	return buttonDivide;
}

wxButton* ButtonFactory::GetDelButton()
{
	return buttonDel;
}

wxButton* ButtonFactory::GetEqualsButton()
{
	return buttonEquals;
}

wxButton* ButtonFactory::GetModButton()
{
	return buttonMod;
}

void ButtonFactory::CreateAllButtons(wxWindow* parent)
{
	buttonSin = CreateSinButton(parent);
	buttonCos = CreateCosButton(parent);
	buttonTan = CreateTanButton(parent);
	buttonClear = CreateClearButton(parent);
	button7 = Create7Button(parent);
	button8 = Create8Button(parent);
	button9 = Create9Button(parent);
	buttonPlus = CreatePlusButton(parent);
	button4 = Create4Button(parent);
	button5 = Create5Button(parent);
	button6 = Create6Button(parent);
	buttonSubtract = CreateSubtractButton(parent);
	button1 = Create1Button(parent);
	button2 = Create2Button(parent);
	button3 = Create3Button(parent);
	buttonMultiply = CreateMultiplyButton(parent);
	buttonNeg = CreateNegButton(parent);
	button0 = Create0Button(parent);
	buttonDecimal = CreateDecimalButton(parent);
	buttonDivide = CreateDivideButton(parent);
	buttonDel = CreateDelButton(parent);
	buttonEquals = CreateEqualsButton(parent);
	buttonMod = CreateModButton(parent);
}

wxButton* ButtonFactory::CreateSinButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10001, "SIN", wxPoint(30, 120), wxSize(80, 40));
	return button;
}

wxButton* ButtonFactory::CreateCosButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10002, "COS", wxPoint(130, 120), wxSize(80, 40));
	return button;
}

wxButton* ButtonFactory::CreateTanButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10003, "TAN", wxPoint(230, 120), wxSize(80, 40));
	return button;
}

wxButton* ButtonFactory::CreateClearButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10004, "CLEAR", wxPoint(330, 120), wxSize(80, 40));
	return button;
}

wxButton* ButtonFactory::Create7Button(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10005, "7", wxPoint(30, 180), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::Create8Button(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10006, "8", wxPoint(130, 180), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::Create9Button(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10007, "9", wxPoint(230, 180), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::CreatePlusButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10008, "+", wxPoint(330, 180), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::Create4Button(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10009, "4", wxPoint(30, 280), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::Create5Button(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10010, "5", wxPoint(130, 280), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::Create6Button(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10011, "6", wxPoint(230, 280), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::CreateSubtractButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10012, "-", wxPoint(330, 280), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::Create1Button(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10013, "1", wxPoint(30, 380), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::Create2Button(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10014, "2", wxPoint(130, 380), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::Create3Button(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10015, "3", wxPoint(230, 380), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::CreateMultiplyButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10016, "*", wxPoint(330, 380), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::CreateNegButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10017, "NEG", wxPoint(30, 480), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::Create0Button(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10018, "0", wxPoint(130, 480), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::CreateDecimalButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10019, ".", wxPoint(230, 480), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::CreateDivideButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10020, "/", wxPoint(330, 480), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::CreateDelButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10021, "DEL", wxPoint(30, 580), wxSize(80, 80));
	return button;
}

wxButton* ButtonFactory::CreateEqualsButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10022, "=", wxPoint(130, 580), wxSize(180, 80));
	return button;
}

wxButton* ButtonFactory::CreateModButton(wxWindow* parent)
{
	wxButton* button = new wxButton(parent, 10023, "%", wxPoint(330, 580), wxSize(80, 80));
	return button;
}
