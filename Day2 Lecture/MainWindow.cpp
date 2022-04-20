#include "MainWindow.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
EVT_BUTTON(wxID_ANY, OnButtonClick)
wxEND_EVENT_TABLE()
wxString getText;
MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Main", wxPoint(200, 200), wxSize(341, 537))
{
#pragma region Buttons
    btnZero = ButtonFactory::CreateNumButton(this, 2, "0", wxPoint(81, 438), wxSize(80, 60));
    btn1 = ButtonFactory::CreateNumButton(this, 5, "1", wxPoint(1, 378), wxSize(80, 60));
    btn2 = ButtonFactory::CreateNumButton(this, 6, "2", wxPoint(81, 378), wxSize(80, 60));
    btn3 = ButtonFactory::CreateNumButton(this, 7, "3", wxPoint(161, 378), wxSize(80, 60));
    btn4 = ButtonFactory::CreateNumButton(this, 9, "4", wxPoint(1, 319), wxSize(80, 60));
    btn5 = ButtonFactory::CreateNumButton(this, 10, "5", wxPoint(81, 319), wxSize(80, 60));
    btn6 = ButtonFactory::CreateNumButton(this, 11, "6", wxPoint(161, 319), wxSize(80, 60));
    btn7 = ButtonFactory::CreateNumButton(this, 13, "7", wxPoint(1, 260), wxSize(80, 60));
    btn8 = ButtonFactory::CreateNumButton(this, 14, "8", wxPoint(81, 260), wxSize(80, 60));
    btn9 = ButtonFactory::CreateNumButton(this, 15, "9", wxPoint(161, 260), wxSize(80, 60));
    btnPlus = ButtonFactory::CreateAddButton(this, 8, wxPoint(241, 378), wxSize(85, 60));
    btnMinus = ButtonFactory::CreateMinusButton(this, 12, wxPoint(241, 319), wxSize(85, 60));
    btnTimes = ButtonFactory::CreateTimesButton(this, 16, wxPoint(241, 260), wxSize(85, 60));
    btnDivide = ButtonFactory::CreateDivideButton(this, 17, wxPoint(241, 200), wxSize(85, 60));
    btnMod = ButtonFactory::CreateModButton(this, 18, wxPoint(161, 200), wxSize(80, 60));
    btnBin = ButtonFactory::CreateBinaryButton(this, 21, wxPoint(1, 150), wxSize(108, 50));
    btnHex = ButtonFactory::CreateHexButton(this, 22, wxPoint(109, 150), wxSize(108, 50));
    btnDec = ButtonFactory::CreateDecButton(this, 23, wxPoint(217, 150), wxSize(108, 50));
    btnClear = ButtonFactory::CreateClearButton(this, 20, wxPoint(1, 200), wxSize(80, 60));
    btnBack = ButtonFactory::CreateBackButton(this, 19, wxPoint(81, 200), wxSize(80, 60));
    btnEqual = ButtonFactory::CreateEqualButton(this, 4, wxPoint(241, 438), wxSize(85, 60));
    btnDot = ButtonFactory::CreateDotButton(this, 3, wxPoint(161, 438), wxSize(80, 60));
    btnNeg = ButtonFactory::CreateNegButton(this, 1, wxPoint(1, 438), wxSize(80, 60));
    text = new wxTextCtrl (this, wxID_ANY, "0", wxPoint(0, 0), wxSize(325, 150));
#pragma endregion

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
    btnClear->SetFont(font);
    btnBin->SetFont(font2);
    btnHex->SetFont(font2);
    btnDec->SetFont(font2);
    text->SetFont(font3);
#pragma endregion

#pragma region ButtonColor
    btnEqual->SetBackgroundColour(wxColor(153, 204, 255));
    btnBin->SetBackgroundColour(wxColor(153, 204, 255));
    btnHex->SetBackgroundColour(wxColor(153, 204, 255));
    btnDec->SetBackgroundColour(wxColor(153, 204, 255));
    btnClear->SetBackgroundColour(wxColor(255, 51, 51));
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

void MainWindow::OnButtonClick(wxCommandEvent& evt) {
    if (FirstClick == true && text->GetLabelText() == "0") //check if the its ur first click and if the value on the screen is 0
    {
        text->SetLabelText("");
    }
    if (evt.GetId() == 2) //zero
    {
        text->AppendText("0");
        track.Append("0");
    }
    else if (evt.GetId() == 1) //negative
    {
        text->AppendText("(-");
    }
    else if (evt.GetId() == 5) //one
    {
        text->AppendText("1");
        track.Append("1");
    }
    else if (evt.GetId() == 6) //two
    {
        text->AppendText("2");
        track.Append("2");
    }
    else if (evt.GetId() == 7) //three
    {
        text->AppendText("3");
        track.Append("3");
    }
    else if (evt.GetId() == 9) //four
    {
        text->AppendText("4");
        track.Append("4");
    }
    else if (evt.GetId() == 10) //five
    {
        text->AppendText("5");
        track.Append("5");
    }
    else if (evt.GetId() == 11) //six
    {
        text->AppendText("6");
        track.Append("6");
    }
    else if (evt.GetId() == 13) //seven
    {
        text->AppendText("7");
        track.Append("7");
    }
    else if (evt.GetId() == 14) //eight
    {
        text->AppendText("8");
        track.Append("8");
    }
    else if (evt.GetId() == 15) //nine
    {
        text->AppendText("9");
        track.Append("9");
    }
    else if (evt.GetId() == 8) //plus
    {
        text->AppendText("+");
        track.Append("+");
    }
    else if (evt.GetId() == 12) //minus
    {
        text->AppendText("-");
        track.Append("-");
    }
    else if (evt.GetId() == 17) //Divide
    {
        text->AppendText("÷");
        track.Append("÷");
    }
    else if (evt.GetId() == 16) //Times
    {
        text->AppendText("×");
        track.Append("×");
    }
    else if (evt.GetId() == 4) //Equals
    {
        Operations();
    }
    else if (evt.GetId() == 3) //DOT
    {
        text->AppendText(".");
        track.Append(".");
    }
    else if (evt.GetId() == 18) //MOD
    {
        text->AppendText("%");
        track.Append("%");
    }
    else if (evt.GetId() == 20) //Clear
    {
        text->Clear();
        text->SetLabelText("0");
        track = "0";
        evt.Skip();
    }
    else if (evt.GetId() == 19)
    {
        wxString temp = text->GetLabelText();
        temp = temp.SubString(0, temp.length() - 1);
        text->SetLabelText(temp);
    }
    //else if (evt.GetId() == 1) //POS NEG
    //{
    //    
    //}
    //else if (evt.GetId() == 19) //BACK
    //{
    //    
    //}
    //else if (evt.GetId() == 21) //BIN
    //{
    //    
    //}
    //else if (evt.GetId() == 222) //HEX
    //{
    //    
    //}
    //else if (evt.GetId() == 23) //DEC
    //{
    //    
    //}
}
void MainWindow::Operations()
{
   
    if (track.Contains("+"))
    {
       /* wxString leftSide;
        wxString rightSide;
        int find = track.find("+");
        leftSide = track.SubString(0, find);
        rightSide = track.SubString(find + 1, track.length());
        int sum = wxAtoi(leftSide) + wxAtoi(rightSide);*/
        int sum = cp->AddOp(track.ToStdString());
        text->SetLabelText(std::to_string(sum));
        track = std::to_string(sum);
    }
    else if (track.Contains("-"))
    {
        /*wxString leftSide;
        wxString rightSide;
        int find = track.find("-");
        leftSide = track.SubString(0, find);
        rightSide = track.SubString(find + 1, track.length());
        int sum = wxAtoi(leftSide) - wxAtoi(rightSide);*/
        int sum = cp->SubOp(track.ToStdString());
        text->SetLabelText(std::to_string(sum));
        track = std::to_string(sum);
    }
    else if (track.Contains("÷"))
    {
        /*wxString leftSide;
        wxString rightSide;
        int find = track.find("÷");
        leftSide = track.SubString(0, find);
        rightSide = track.SubString(find + 1, track.length());
        int sum = wxAtoi(leftSide) / wxAtoi(rightSide);*/
        int sum = cp->DivOp(track.ToStdString());
        text->SetLabelText(std::to_string(sum));
        track = std::to_string(sum);
    }
    else if (track.Contains("×"))
    {
        /*wxString leftSide;
        wxString rightSide;
        int find = track.find("×");
        leftSide = track.SubString(0, find);
        rightSide = track.SubString(find + 1, track.length());
        int sum = wxAtoi(leftSide) * wxAtoi(rightSide);*/
        int sum = cp->TimesOp(track.ToStdString());
        text->SetLabelText(std::to_string(sum));
        track = std::to_string(sum);
    }
    else if (track.Contains("%"))
    {
        /*wxString leftSide;
        wxString rightSide;
        int find = track.find("%");
        leftSide = track.SubString(0, find);
        rightSide = track.SubString(find + 1, track.length());
        int sum = wxAtoi(leftSide) % wxAtoi(rightSide);*/
        int sum = cp->ModOp(track.ToStdString());
        text->SetLabelText(std::to_string(sum));
        track = std::to_string(sum);
    }
}
