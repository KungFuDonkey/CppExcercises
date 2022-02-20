#pragma once
#include "ExampleBase.h"

class ExampleDerived : public ExampleBase
{
public:
	ExampleDerived();
	void PureVirtual() override;
};