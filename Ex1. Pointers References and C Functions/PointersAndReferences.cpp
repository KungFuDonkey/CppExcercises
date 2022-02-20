#include <iostream>       // include os  header file
#include "ExampleClass.h" // include own header file


// 1) Write the log function that logs i by value
void LogByValue(int i)
{
	
}

// 2) Write the log function that logs i by pointer
void LogByPointer(int* i)
{
	
}

// 3) Write the log function that logs i by reference
void LogByReference(int& i)
{
	
}

// 4) Write LogExampleClassByPointer that logs ExampleClass by pointer

// 5) Write LogExampleClassByReference that logs ExampleClass by reference

int main()
{
	int i = 20;
	ExampleClass* example = new ExampleClass(42);

	// 6) call LogByValue with i

	// 7) call LogByPointer with i

	// 8) call LogByReference with i

	// 9) call LogExampleClassByPointer with ExampleClass and log the value of the class

	// 10) call LogExampleClassByReference with ExampleClass and log the value of the class

	return 0;
}