#include "ButtonFactory.h"

wxButton* ButtonFactory::CreateNumButton(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, label, pos, size);
}

wxButton* ButtonFactory::CreateAddButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "+", pos, size);
}

wxButton* ButtonFactory::CreateMinusButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "-", pos, size);
}

wxButton* ButtonFactory::CreateTimesButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "×", pos, size);
}

wxButton* ButtonFactory::CreateDivideButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "÷", pos, size);
}

wxButton* ButtonFactory::CreateModButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "%", pos, size);
}

wxButton* ButtonFactory::CreateBinaryButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "BIN", pos, size);
}

wxButton* ButtonFactory::CreateHexButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "HEX", pos, size);
}

wxButton* ButtonFactory::CreateDecButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "DEC", pos, size);
}

wxButton* ButtonFactory::CreateClearButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "C", pos, size);
}

wxButton* ButtonFactory::CreateBackButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "BACK", pos, size);
}

wxButton* ButtonFactory::CreateEqualButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "=", pos, size);
}

wxButton* ButtonFactory::CreateDotButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, ".", pos, size);
}

wxButton* ButtonFactory::CreateNegButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "+/-", pos, size);
}
