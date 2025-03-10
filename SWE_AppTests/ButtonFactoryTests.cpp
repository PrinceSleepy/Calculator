#include "pch.h"
#include "wx/wx.h"
#include "CppUnitTest.h"
#include "../SWE_App/ButtonFactory.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SWEAppTests
{
	TEST_CLASS(SWEAppTests)
	{
	public:
		
		TEST_METHOD(SinButtonCreated)
		{
			ButtonFactory buttons;
			wxFrame* window = new wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500, 200), wxSize(455, 720));
			buttons.CreateAllButtons(window);
			wxButton* sinButton = buttons.GetSinButton();
			Assert::IsNotNull(sinButton);
		}

		TEST_METHOD(SinButtonPosCorrect)
		{
			ButtonFactory buttons;
			wxFrame* window = new wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500, 200), wxSize(455, 720));
			buttons.CreateAllButtons(window);
			wxButton* sinButton = buttons.GetSinButton();
			Assert::IsTrue(sinButton->GetPosition() == wxPoint(30, 120));
			
		}

		TEST_METHOD(EqualsButtonCorrectSize)
		{
			ButtonFactory buttons;
			wxFrame* window = new wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500, 200), wxSize(455, 720));
			buttons.CreateAllButtons(window);
			wxButton* equalsButton = buttons.GetEqualsButton();
			Assert::IsTrue(equalsButton->GetSize() == wxSize(180, 80));
		}

		TEST_METHOD(EqualsButtonPosCorrect)
		{
			ButtonFactory buttons;
			wxFrame* window = new wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500, 200), wxSize(455, 720));
			buttons.CreateAllButtons(window);
			wxButton* equalsButton = buttons.GetEqualsButton();
			Assert::IsTrue(equalsButton->GetPosition() == wxPoint(130, 580));
		}

		TEST_METHOD(Button0LabelCorrect)
		{
			ButtonFactory buttons;
			wxFrame* window = new wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500, 200), wxSize(455, 720));
			buttons.CreateAllButtons(window);
			wxButton* button0 = buttons.Get0Button();
			Assert::AreEqual("0", button0->GetLabel());
		}

		TEST_METHOD(DecimalButtonIdCorrect)
		{
			ButtonFactory buttons;
			wxFrame* window = new wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500, 200), wxSize(455, 720));
			buttons.CreateAllButtons(window);
			wxButton* decimalButton = buttons.GetDecimalButton();
			Assert::AreEqual(10019, decimalButton->GetId());
		}

		TEST_METHOD(SubtractButtonPosCorrect)
		{
			ButtonFactory buttons;
			wxFrame* window = new wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500, 200), wxSize(455, 720));
			buttons.CreateAllButtons(window);
			wxButton* subtractButton = buttons.GetSubtractButton();
			Assert::IsTrue(wxPoint(330, 280) == subtractButton->GetPosition());
		}

		TEST_METHOD(Button6SizeCorrect)
		{
			ButtonFactory buttons;
			wxFrame* window = new wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500, 200), wxSize(455, 720));
			buttons.CreateAllButtons(window);
			wxButton* button6 = buttons.Get6Button();
			Assert::IsTrue(wxSize(80, 80) == button6->GetSize());
		}
		TEST_METHOD(PlusButtonLabelCorrect)
		{
			ButtonFactory buttons;
			wxFrame* window = new wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500, 200), wxSize(455, 720));
			buttons.CreateAllButtons(window);
			wxButton* plusButton = buttons.GetPlusButton();
			Assert::AreEqual("+", plusButton->GetLabel());
		}

		TEST_METHOD(ClearButtonSizeCorrect)
		{
			ButtonFactory buttons;
			wxFrame* window = new wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(500, 200), wxSize(455, 720));
			buttons.CreateAllButtons(window);
			wxButton* clearButton = buttons.GetClearButton();
			Assert::IsTrue(wxSize(80, 40) == clearButton->GetSize());
			
		}
	};
}
