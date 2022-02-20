#include "ExampleDerived.h"
#include <iostream>

ExampleDerived::ExampleDerived()
{
	std::cout << "Derived: constructor" << std::endl;
	
}

void ExampleDerived::PureVirtual()
{
	std::cout << "Derived: PureVirtual" << std::endl;
}



