#include "CalculatorProcessor.h"
#include <bitset>
#include <sstream>

float CalculatorProcessor::AddOp(std::string t)
{
    std::string leftSide;
    std::string rightSide;
    int find = t.find("+");
    leftSide = t.substr(0, find);
    rightSide = t.substr(find + 1, t.length());
    return std::atof(leftSide.c_str()) + std::atof(rightSide.c_str());
}

float CalculatorProcessor::SubOp(std::string t)
{
    std::string leftSide;
    std::string rightSide;
    int find = t.find("-");
    leftSide = t.substr(0, find);
    rightSide = t.substr(find + 1, t.length());
    return std::atof(leftSide.c_str()) - std::atof(rightSide.c_str());
}

float CalculatorProcessor::DivOp(std::string t)
{
    std::string leftSide;
    std::string rightSide;
    int find = t.find("÷");
    leftSide = t.substr(0, find);
    rightSide = t.substr(find + 1, t.length());
    return std::atof(leftSide.c_str()) / std::atof(rightSide.c_str());
}

float CalculatorProcessor::TimesOp(std::string t)
{
    std::string leftSide;
    std::string rightSide;
    int find = t.find("×");
    leftSide = t.substr(0, find);
    rightSide = t.substr(find + 1, t.length());
    return std::atof(leftSide.c_str()) * std::atof(rightSide.c_str());
}

std::string CalculatorProcessor::BinOp(const std::string& t)
{
    std::string temp;
    std::bitset<12> bin(std::atoi(t.c_str()));
    return bin.to_string();
}

std::string CalculatorProcessor::HexOp(const std::string& t)
{
    std::stringstream hex;
    int num = std::atoi(t.c_str());
    if (num > 0)
    {
        hex << "0x" << std::hex << num;

    }
    else hex << "-0x" << std::hex << (num*-1);
    return hex.str();
}

int CalculatorProcessor::ModOp(std::string t)
{
    std::string leftSide;
    std::string rightSide;
    int find = t.find("%");
    leftSide = t.substr(0, find);
    rightSide = t.substr(find + 1, t.length());
    return std::atoi(leftSide.c_str()) % std::atoi(rightSide.c_str());
}

void CalculatorProcessor::AddCommand(IBaseCommand* cmd, int num) 
{
    if (lastcmd != nullptr)
    {
        lastcmd->rightNum = num;
    }
    cmdList.push_back(cmd);
    lastcmd = cmd;
}

void CalculatorProcessor::cmdClear()
{
    cmdList.clear();
}

float CalculatorProcessor::Execute() 
{
    int num = 0;

    for (std::list<IBaseCommand*>::iterator it = cmdList.begin(); it != cmdList.end();) 
    {
        (*it)->Execute();
        num = (*it)->leftNum;
        it++;

        if (it != cmdList.end()) {
            (*it)->leftNum = num;
        }
        else {
            cmdList.clear();
            lastcmd = nullptr;
        }
    }
    return num;
}
