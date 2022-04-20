#pragma once
#include <string>
class CalculatorProcessor
{
public:
	static CalculatorProcessor& getInstance() {
		static CalculatorProcessor instance;
		return instance;
	}

private:
	CalculatorProcessor() {

	}

public:
	int AddOp(std::string t);
	int SubOp(std::string t);
	int DivOp(std::string t);
	int TimesOp(std::string t);
	int ModOp(std::string t);
};

