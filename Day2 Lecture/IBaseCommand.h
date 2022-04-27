#pragma once
class IBaseCommand
{
public:
	float rightNum;
	float leftNum;

	virtual void Execute() = 0;
};

class AddCommand : public IBaseCommand {
public:
	AddCommand(float lnum) {
		leftNum = lnum;
		rightNum = 0;
	}

	void Execute() {
		leftNum += rightNum;
	}
};
class SubCommand : public IBaseCommand {
public:
	SubCommand(float lnum) {
		leftNum = lnum;
		rightNum = 0;
	}

	void Execute() {
		leftNum -= rightNum;
	}
};
class TimesCommand : public IBaseCommand {
public:
	TimesCommand(float lnum) {
		leftNum = lnum;
		rightNum = 0;
	}

	void Execute() {
		leftNum *= rightNum;
	}
};
class ModCommand : public IBaseCommand {
public:
	ModCommand(int lnum) {
		leftNum = lnum;
		rightNum = 0;
	}

	void Execute() {
		leftNum = (int)rightNum % (int)leftNum;
	}
};
class DivCommand : public IBaseCommand {
public:
	DivCommand(float lnum) {
		leftNum = lnum;
		rightNum = 0;
	}

	void Execute() {
		leftNum /= rightNum;
	}
};
class EqualCommand : public IBaseCommand {
public:
	EqualCommand() {
	}

	void Execute() {
	}
};

