#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"


class Window : public wxFrame
{
private:

	wxTextCtrl* textBox = nullptr;

public:
	Window();

	void OnButtonSin(wxCommandEvent& event);
	void OnButtonCos(wxCommandEvent& event);
	void OnButtonTan(wxCommandEvent& event);
	void OnButtonClear(wxCommandEvent& event);
	void OnButton7(wxCommandEvent& event);
	void OnButton8(wxCommandEvent& event);
	void OnButton9(wxCommandEvent& event);
	void OnButtonPlus(wxCommandEvent& event);
	void OnButton4(wxCommandEvent& event);
	void OnButton5(wxCommandEvent& event);
	void OnButton6(wxCommandEvent& event);
	void OnButtonSubtract(wxCommandEvent& event);
	void OnButton1(wxCommandEvent& event);
	void OnButton2(wxCommandEvent& event);
	void OnButton3(wxCommandEvent& event);
	void OnButtonMultiply(wxCommandEvent& event);
	void OnButtonNeg(wxCommandEvent& event);
	void OnButton0(wxCommandEvent& event);
	void OnButtonDecimal(wxCommandEvent& event);
	void OnButtonDivide(wxCommandEvent& event);
	void OnButtonDel(wxCommandEvent& event);
	void OnButtonEquals(wxCommandEvent& event);
	void OnButtonMod(wxCommandEvent& event);

	wxDECLARE_EVENT_TABLE();
};

