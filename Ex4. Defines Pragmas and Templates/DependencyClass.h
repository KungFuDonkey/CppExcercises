#pragma once
#include "AnotherClass.h"
class DependencyClass
{
public:
	DependencyClass() = default;
	AnotherClass other;
};