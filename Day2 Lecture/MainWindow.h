#pragma once
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
class MainWindow : public wxFrame
{
private:
	wxButton* btnNeg = nullptr;
	wxButton* btnZero = nullptr;
	wxButton* btnDot = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
	wxButton* btnPlus = nullptr;
	wxButton* btnMinus = nullptr;
	wxButton* btnEqual = nullptr;
	wxButton* btnTimes = nullptr;
	wxButton* btnDivide = nullptr;
	wxButton* btnClear = nullptr;
	wxButton* btnBack = nullptr;
	wxButton* btnMod = nullptr;
	wxButton* btnBin = nullptr;
	wxButton* btnHex = nullptr;
	wxButton* btnDec = nullptr;
	wxTextCtrl* text = nullptr;
	static const std::string Stat;
	wxString numString;
public:
	CalculatorProcessor* cp = &CalculatorProcessor::getInstance();
	bool FirstClick = true;
	MainWindow();
	void OnButtonClick(wxCommandEvent& evt);
	void Operations();
	wxString track;
	wxDECLARE_EVENT_TABLE();
};

