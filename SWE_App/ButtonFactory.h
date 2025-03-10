#pragma once
#include "wx/wx.h"
class ButtonFactory
{
	wxButton* buttonSin = nullptr;
	wxButton* buttonCos = nullptr;
	wxButton* buttonTan = nullptr;
	wxButton* buttonClear = nullptr;
	wxButton* button7 = nullptr;
	wxButton* button8 = nullptr;
	wxButton* button9 = nullptr;
	wxButton* buttonPlus = nullptr;
	wxButton* button4 = nullptr;
	wxButton* button5 = nullptr;
	wxButton* button6 = nullptr;
	wxButton* buttonSubtract = nullptr;
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* buttonMultiply = nullptr;
	wxButton* buttonNeg = nullptr;
	wxButton* button0 = nullptr;
	wxButton* buttonDecimal = nullptr;
	wxButton* buttonDivide = nullptr;
	wxButton* buttonDel = nullptr;
	wxButton* buttonEquals = nullptr;
	wxButton* buttonMod = nullptr;

public:

	ButtonFactory();
	wxButton* GetSinButton();
	wxButton* GetCosButton();
	wxButton* GetTanButton();
	wxButton* GetClearButton();
	wxButton* Get7Button();
	wxButton* Get8Button();
	wxButton* Get9Button();
	wxButton* GetPlusButton();
	wxButton* Get4Button();
	wxButton* Get5Button();
	wxButton* Get6Button();
	wxButton* GetSubtractButton();
	wxButton* Get1Button();
	wxButton* Get2Button();
	wxButton* Get3Button();
	wxButton* GetMultiplyButton();
	wxButton* GetNegButton();
	wxButton* Get0Button();
	wxButton* GetDecimalButton();
	wxButton* GetDivideButton();
	wxButton* GetDelButton();
	wxButton* GetEqualsButton();
	wxButton* GetModButton();
	void CreateAllButtons(wxWindow* parent);
	wxButton* CreateSinButton(wxWindow* parent);
	wxButton* CreateCosButton(wxWindow* parent);
	wxButton* CreateTanButton(wxWindow* parent);
	wxButton* CreateClearButton(wxWindow* parent);
	wxButton* Create7Button(wxWindow* parent);
	wxButton* Create8Button(wxWindow* parent);
	wxButton* Create9Button(wxWindow* parent);
	wxButton* CreatePlusButton(wxWindow* parent);
	wxButton* Create4Button(wxWindow* parent);
	wxButton* Create5Button(wxWindow* parent);
	wxButton* Create6Button(wxWindow* parent);
	wxButton* CreateSubtractButton(wxWindow* parent);
	wxButton* Create1Button(wxWindow* parent);
	wxButton* Create2Button(wxWindow* parent);
	wxButton* Create3Button(wxWindow* parent);
	wxButton* CreateMultiplyButton(wxWindow* parent);
	wxButton* CreateNegButton(wxWindow* parent);
	wxButton* Create0Button(wxWindow* parent);
	wxButton* CreateDecimalButton(wxWindow* parent);
	wxButton* CreateDivideButton(wxWindow* parent);
	wxButton* CreateDelButton(wxWindow* parent);
	wxButton* CreateEqualsButton(wxWindow* parent);
	wxButton* CreateModButton(wxWindow* parent);

};

