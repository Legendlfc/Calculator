#include "../Day2 Lecture/CalculatorProcessor.h"
#include "../Day2 Lecture/CalculatorProcessor.cpp"
CalculatorProcessor* cp = &CalculatorProcessor::getInstance(); 
bool AddOpOnePlusTwo() {
	return 3 == cp->AddOp("1+2");
}
bool SubOpFourMinusTwo() {
	return 2 == cp->SubOp("4-2");
}
bool DivOpTenDiv5() {
	return 2 == cp->AddOp("10/5");
}
bool BinOpTen() {
	return "000000001010" == cp->BinOp("10");
}
bool BinOptwenty() {
	return "000000010100" == cp->BinOp("20");
}
bool HexOpTen() {
	return "0xA" == cp->HexOp("10");
}
bool HexOptwenty() {
	return "0x14" == cp->HexOp("20");
}
bool HexOpthirty() {
	return "0x1E" == cp->HexOp("30");
}
bool BinOptwentyfive() {
	return "000000011001" == cp->BinOp("25");
}
bool BinOpthirty() {
	return "000000011110" == cp->HexOp("30");
}