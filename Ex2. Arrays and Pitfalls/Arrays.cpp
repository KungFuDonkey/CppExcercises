#include <iostream>

// 1) los de verschillende undefined behaviour errors op
//    je kan de functies callen in main

void UndefinedBehaviour1()
{
	int* arr = new int[20];
	delete[] arr;
	for (int i = 0; i < 20; i++)
	{
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}
}

void UndefinedBehaviour2()
{
	int arr[20];
	for (int i = 0; i < 20; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void UndefinedBehaviour4()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}
	delete[] arr;
}

void UndefinedBehaviour5()
{
	int arr[10];
	for (int i = 0; i < 20; i++)
	{
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}
}

// 2) haal een heap allocated array uit deze function
int* function()
{
	int arr[20];
	for(int i = 0; i < 20; i++)
	{
		arr[i] = i;
	}
	return arr;
}

// 3) haal een stack allocated array uit function zonder dat het verwijderd wordt door de stack pointer
//    (TIP: maak function een void function en gebruik een reference)
int* function2()
{
	int arr[20];
	for (int i = 0; i < 20; i++)
	{
		arr[i] = i;
	}
	return arr;
}

int main()
{

}