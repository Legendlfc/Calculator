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
	float AddOp(std::string t);
	float SubOp(std::string t);
	float DivOp(std::string t);
	float TimesOp(std::string t);
	std::string BinOp(const std::string& t);
	std::string HexOp(const std::string& t);
	int ModOp(std::string t);
	void AddCommand(IBaseCommand* cmd, int num);
	void cmdClear();
	float Execute();
	
};

