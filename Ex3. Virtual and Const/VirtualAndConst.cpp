#include "ExampleDerived.h"


// 4) Call both of the virtual functions in this method of derived.
//    (Tip: You shouldn't change the const modifier here)
void Excercise4(const ExampleDerived& derived)
{
	
}

// 1) instead of the base PureVirtual call from a constructor, only call
//    the derived PureVirtual from the ExampleDerived constructor and remove other PureVirtual calls. 

// 2) instead of the base Virtual call, we want to call the Derived
//    Virtual function and the Base Virtual function in 1 call

// 3) To show that the base class also has an implementation for the
//    Pure virtual function, call the base PureVirtual function the PureVirtual function of ExampleDerived

int main()
{
	ExampleDerived d;
	d.Virtual();

	Excercise4(d);
}