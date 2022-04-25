#pragma once
#include <string>
#include <list>
#include "IBaseCommand.h"
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
	std::list<IBaseCommand*>cmdList;
	IBaseCommand* lastcmd = nullptr;

public:
	int AddOp(std::string t);
	int SubOp(std::string t);
	int DivOp(std::string t);
	int TimesOp(std::string t);
	int ModOp(std::string t);

	void AddCommand(IBaseCommand* cmd, int num);

	int Execute();
	
};

