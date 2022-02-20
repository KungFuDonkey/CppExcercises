#pragma once


class ExampleBase
{
public:
	ExampleBase();

	virtual void PureVirtual() = 0;
	virtual void Virtual();
};