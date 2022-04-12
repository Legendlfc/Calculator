#include "MainWindow.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
EVT_BUTTON(100, OnButtonClick)
EVT_BUTTON(101, OnButtonClick2)
wxEND_EVENT_TABLE()

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Main", wxPoint(200, 200), wxSize(341, 537))
{
    btnNeg = new wxButton (this, 1, "+/-", wxPoint(1, 438), wxSize(80, 60));
    btnZero = new wxButton (this, 2, "0", wxPoint(81, 438), wxSize(80, 60));
    btnDot = new wxButton(this, 3, ".", wxPoint(161, 438), wxSize(80, 60));
    btnEqual = new wxButton(this, 4, "=", wxPoint(241, 438), wxSize(85, 60));
    btn1 = new wxButton(this, 5, "1", wxPoint(1, 378), wxSize(80, 60));
    btn2 = new wxButton(this, 6, "2", wxPoint(81, 378), wxSize(80, 60));
    btn3 = new wxButton(this, 7, "3", wxPoint(161, 378), wxSize(80, 60));
    btnPlus = new wxButton(this, 8, "+", wxPoint(241, 378), wxSize(85, 60));
    btn4 = new wxButton(this, 9, "4", wxPoint(1, 319), wxSize(80, 60));
    btn5 = new wxButton(this, 10, "5", wxPoint(81, 319), wxSize(80, 60));
    btn6 = new wxButton(this, 11, "6", wxPoint(161, 319), wxSize(80, 60));
    btnMinus = new wxButton(this, 12, "-", wxPoint(241, 319), wxSize(85, 60));
    btn7 = new wxButton(this, 13, "7", wxPoint(1, 260), wxSize(80, 60));
    btn8 = new wxButton(this, 14, "8", wxPoint(81, 260), wxSize(80, 60));
    btn9 = new wxButton(this, 15, "9", wxPoint(161, 260), wxSize(80, 60));
    btnTimes = new wxButton(this, 16, "×", wxPoint(241, 260), wxSize(85, 60));
    btnDivide = new wxButton(this, 17, "÷", wxPoint(241, 200), wxSize(85, 60));
    btnMod = new wxButton(this, 18, "%", wxPoint(161, 200), wxSize(80, 60));
    btnBack = new wxButton(this, 19, "BACK", wxPoint(81, 200), wxSize(80, 60));
    btnClear = new wxButton(this, 20, "CE", wxPoint(1, 200), wxSize(80, 60));
    btnBin = new wxButton(this, 21, "BIN", wxPoint(1, 150), wxSize(108, 50));
    btnHex = new wxButton(this, 22, "HEX", wxPoint(109, 150), wxSize(108, 50));
    btnDec = new wxButton(this, 23, "DEC", wxPoint(217, 150), wxSize(108, 50));
    text = new wxTextCtrl (this, wxID_ANY, "", wxPoint(0, 0), wxSize(325, 150));
#pragma region FONT
    wxFont font(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
    wxFont font2(11, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_LIGHT, false);
    wxFont font3(30, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_EXTRALIGHT, false);
    wxFont font4(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_EXTRALIGHT, false);
    btnNeg->SetFont(font2);
    btnZero->SetFont(font);
    btnDot->SetFont(font3);
    btnEqual->SetFont(font4);
    btn1->SetFont(font);
    btn2->SetFont(font);
    btn3->SetFont(font);
    btnPlus->SetFont(font4);
    btn4->SetFont(font);
    btn5->SetFont(font);
    btn6->SetFont(font);
    btnMinus->SetFont(font4);
    btn7->SetFont(font);
    btn8->SetFont(font);
    btn9->SetFont(font);
    btnTimes->SetFont(font4);
    btnDivide->SetFont(font4);
    btnMod->SetFont(font2);
    btnBack->SetFont(font2);
    btnClear->SetFont(font2);
    btnBin->SetFont(font2);
    btnHex->SetFont(font2);
    btnDec->SetFont(font2);
#pragma endregion

#pragma region ButtonColor
    btnEqual->SetBackgroundColour(wxColor(153, 204, 255));
    btn1->SetBackgroundColour(wxColor(255, 255, 255));
    btn2->SetBackgroundColour(wxColor(255, 255, 255));
    btn3->SetBackgroundColour(wxColor(255, 255, 255));
    btn4->SetBackgroundColour(wxColor(255, 255, 255));
    btn5->SetBackgroundColour(wxColor(255, 255, 255));
    btn6->SetBackgroundColour(wxColor(255, 255, 255));
    btn7->SetBackgroundColour(wxColor(255, 255, 255));
    btn8->SetBackgroundColour(wxColor(255, 255, 255));
    btn9->SetBackgroundColour(wxColor(255, 255, 255));
    btnNeg->SetBackgroundColour(wxColor(255, 255, 255));
    btnZero->SetBackgroundColour(wxColor(255, 255, 255));
    btnDot->SetBackgroundColour(wxColor(255, 255, 255));
    text->SetBackgroundColour(wxColor(224, 224, 224));
#pragma endregion
}

void MainWindow::OnButtonClick(wxCommandEvent& evt) 
{
    text->SetValue("Press!!!!");
    evt.Skip();
}

//MainWindow::~MainWindow() 
//{
//    
//}

void MainWindow::OnButtonClick2(wxCommandEvent& evt) 
{
    text->SetValue("YAY");
    
    evt.Skip();
}