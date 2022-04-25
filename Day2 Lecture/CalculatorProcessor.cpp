#include "CalculatorProcessor.h"

int CalculatorProcessor::AddOp(std::string t)
{
    std::string leftSide;
    std::string rightSide;
    int find = t.find("+");
    leftSide = t.substr(0, find);
    rightSide = t.substr(find + 1, t.length());
    return std::atoi(leftSide.c_str()) + std::atoi(rightSide.c_str());
}

int CalculatorProcessor::SubOp(std::string t)
{
    std::string leftSide;
    std::string rightSide;
    int find = t.find("-");
    leftSide = t.substr(0, find);
    rightSide = t.substr(find + 1, t.length());
    return std::atoi(leftSide.c_str()) - std::atoi(rightSide.c_str());
}

int CalculatorProcessor::DivOp(std::string t)
{
    std::string leftSide;
    std::string rightSide;
    int find = t.find("÷");
    leftSide = t.substr(0, find);
    rightSide = t.substr(find + 1, t.length());
    return std::atoi(leftSide.c_str()) / std::atoi(rightSide.c_str());
}

int CalculatorProcessor::TimesOp(std::string t)
{
    std::string leftSide;
    std::string rightSide;
    int find = t.find("×");
    leftSide = t.substr(0, find);
    rightSide = t.substr(find + 1, t.length());
    return std::atoi(leftSide.c_str()) * std::atoi(rightSide.c_str());
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

int CalculatorProcessor::Execute() 
{
    int num = 0;

    for (std::list<IBaseCommand*>::iterator it = cmdList.begin(); it != cmdList.end();) 
    {
        (*it)->Execute();
        num = (*it)->leftNum;
        it++;

        if (it == cmdList.end())
        {
            break;
        }

        (*it)->leftNum = num;
    }
    cmdList.clear();
    lastcmd = nullptr;
    return num;
}
