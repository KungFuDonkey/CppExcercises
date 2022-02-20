#include "ExampleBase.h"
#include <iostream>

ExampleBase::ExampleBase()
{
	std::cout << "Base: constructor" << std::endl;
	PureVirtual();
}

void ExampleBase::PureVirtual()
{
	std::cout << "Base: Pure virtual call" << std::endl;
}

void ExampleBase::Virtual()
{
	std::cout << "Base: Virtual call" << std::endl;
}
