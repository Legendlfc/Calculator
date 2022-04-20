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
