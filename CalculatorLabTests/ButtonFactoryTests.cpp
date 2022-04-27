#include "../Day2 Lecture/ButtonFactory.h"
#include "../Day2 Lecture/ButtonFactory.cpp"
ButtonFactory btnFac;
bool createAddButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}

bool createMinusButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}
bool createTimesButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}
bool createModButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}
bool createDivideButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}
bool createBinaryButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}
bool createHexButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}
bool createDecButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}
bool createDotButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}
bool createClearButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}bool createEqualButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}bool createNegButtonTest(int id) {
	wxButton* btn = btnFac.CreateAddButton(nullptr, id);
	int one = btn->GetId();
	delete btn;
	return one == id;
}