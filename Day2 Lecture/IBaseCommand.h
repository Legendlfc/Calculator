#pragma once
class IBaseCommand
{
public:
	int rightNum;
	int leftNum;

	virtual void Execute() = 0;
};

class AddCommand : public IBaseCommand {
public:
	AddCommand(int lnum) {
		leftNum = lnum;
		rightNum = 0;
	}

	void Execute() {
		leftNum += rightNum;
	}
};
class SubCommand : public IBaseCommand {
public:
	SubCommand(int lnum) {
		leftNum = lnum;
		rightNum = 0;
	}

	void Execute() {
		leftNum -= rightNum;
	}
};
class TimesCommand : public IBaseCommand {
public:
	TimesCommand(int lnum) {
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
		leftNum %= rightNum;
	}
};
class DivCommand : public IBaseCommand {
public:
	DivCommand(int lnum) {
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

