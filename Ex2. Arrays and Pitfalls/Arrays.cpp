#include <iostream>

// 1) solve all behaviour erros
//    you can call the functions in main()

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

void UndefinedBehaviour3()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}
	delete[] arr;
}

void UndefinedBehaviour4()
{
	int arr[10];
	for (int i = 0; i < 20; i++)
	{
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}
}

// 2) retrieve a heap allocated array from this function
int* function()
{
	int arr[20];
	for(int i = 0; i < 20; i++)
	{
		arr[i] = i;
	}
	return arr;
}

// 3) retrieve a stack allocated array from this function
//    (TIP: make the function a void function and use a reference)
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