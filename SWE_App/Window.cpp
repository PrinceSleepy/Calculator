#include "Window.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
	EVT_BUTTON(10001, Window::OnButtonSin)
	EVT_BUTTON(10002, Window::OnButtonCos)
	EVT_BUTTON(10003, Window::OnButtonTan)
	EVT_BUTTON(10004, Window::OnButtonClear)
	EVT_BUTTON(10005, Window::OnButton7)
	EVT_BUTTON(10006, Window:: OnButton8)
	EVT_BUTTON(10007, Window::OnButton9)
	EVT_BUTTON(10008, Window::OnButtonPlus)
	EVT_BUTTON(10009, Window::OnButton4)
	EVT_BUTTON(10010, Window::OnButton5)
	EVT_BUTTON(10011, Window::OnButton6)
	EVT_BUTTON(10012, Window::OnButtonSubtract)
	EVT_BUTTON(10013, Window::OnButton1)
	EVT_BUTTON(10014, Window::OnButton2)
	EVT_BUTTON(10015, Window::OnButton3)
	EVT_BUTTON(10016, Window::OnButtonMultiply)
	EVT_BUTTON(10017, Window::OnButtonNeg)
	EVT_BUTTON(10018, Window::OnButton0)
	EVT_BUTTON(10019, Window::OnButtonDecimal)
	EVT_BUTTON(10020, Window::OnButtonDivide)
	EVT_BUTTON(10021, Window::OnButtonDel)
	EVT_BUTTON(10022, Window::OnButtonEquals)
	EVT_BUTTON(10023, Window::OnButtonMod)
wxEND_EVENT_TABLE()



Window::Window() : wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500,200), wxSize(455,720))
{
	wxFont font = GetFont();
	font.SetPixelSize(wxSize(0, 24));
	SetFont(font);
	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(20, 20), wxSize(400, 80));
	ButtonFactory factory;
	factory.CreateAllButtons(this);
}

void Window::OnButtonSin(wxCommandEvent& event)
{
	textBox->AppendText(" SIN ");
	event.Skip();
}

void Window::OnButtonCos(wxCommandEvent& event)
{
	textBox->AppendText(" COS ");
	event.Skip();
}

void Window::OnButtonTan(wxCommandEvent& event)
{
	textBox->AppendText(" TAN ");
	event.Skip();
}

void Window::OnButtonClear(wxCommandEvent& event)
{
	textBox->Clear();
	event.Skip();
}

void Window::OnButton7(wxCommandEvent& event)
{
	textBox->AppendText("7");
	event.Skip();
}

void Window::OnButton8(wxCommandEvent& event)
{
	textBox->AppendText("8");
	event.Skip();
}

void Window::OnButton9(wxCommandEvent& event)
{
	textBox->AppendText("9");
	event.Skip();
}

void Window::OnButtonPlus(wxCommandEvent& event)
{
	textBox->AppendText(" + ");
	event.Skip();
}

void Window::OnButton4(wxCommandEvent& event)
{
	textBox->AppendText("4");
	event.Skip();
}

void Window::OnButton5(wxCommandEvent& event)
{
	textBox->AppendText("5");
	event.Skip();
}

void Window::OnButton6(wxCommandEvent& event)
{
	textBox->AppendText("6");
	event.Skip();
}

void Window::OnButtonSubtract(wxCommandEvent& event)
{
	textBox->AppendText(" - ");
	event.Skip();
}

void Window::OnButton1(wxCommandEvent& event)
{
	textBox->AppendText("1");
	event.Skip();
}

void Window::OnButton2(wxCommandEvent& event)
{
	textBox->AppendText("2");
	event.Skip();
}

void Window::OnButton3(wxCommandEvent& event)
{
	textBox->AppendText("3");
	event.Skip();
}

void Window::OnButtonMultiply(wxCommandEvent& event)
{
	textBox->AppendText(" * ");
	event.Skip();
}

void Window::OnButtonNeg(wxCommandEvent& event)
{
	textBox->AppendText("-"); 
	
	//used En-dash that was posted on SWE announcements on Discord instead of regular dash that was used in Subtracting
	
	event.Skip();
}

void Window::OnButton0(wxCommandEvent& event)
{
	textBox->AppendText("0");
	event.Skip();
}

void Window::OnButtonDecimal(wxCommandEvent& event)
{
	textBox->AppendText(".");
	event.Skip();
}

void Window::OnButtonDivide(wxCommandEvent& event)
{
	textBox->AppendText(" / ");
	event.Skip();
}

void Window::OnButtonDel(wxCommandEvent& event)
{
	textBox->Remove(textBox->GetLastPosition()-1, textBox->GetLastPosition());
	event.Skip();
}

void Window::OnButtonEquals(wxCommandEvent& event)
{
	CalculatorProcessor* processorSingleton = CalculatorProcessor::GetInstance();
	wxString result = processorSingleton->Calculate(textBox->GetValue());
	textBox->Clear();
	textBox->AppendText(result);
	event.Skip();
}

void Window::OnButtonMod(wxCommandEvent& event)
{
	textBox->AppendText(" % ");
	event.Skip();
}
