// C++ Tutorial - Pointers, References and Values.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// inputValue is Pass by Value - the function gets a copy of the input
int SimpleFn1(int inputValue)
{
    inputValue += 10;

    return inputValue;
}

// inputValue is Pass by Reference - the function gets a reference to the input
// VariableType& is a reference to a variable of VariableType
int SimpleFn2(int& inputValue)
{
	inputValue += 10;

	return inputValue;
}

// inputValue is Pass by Pointer - the function gets a pointer to the input
// VariableType* is a pointer to a variable of VariableType
int SimpleFn3(int* inputValue)
{
	// is the pointer null/nullptr
	if (!inputValue)
	{
		std::cout << "nullptr provided to SimpleFn3" << std::endl;
		return -1;
	}

	*inputValue += 10;

	return *inputValue;
}

// inputValue is Pass by Const Reference - the function gets a reference to the input
// const VariableType& is a const reference to a variable of VariableType. It cannot be modified.
int SimpleFn4(const int& inputValue)
{
	//inputValue += 10;

	return inputValue;
}

// Simple Data + Small - Pass by value if not needing to modify, otherwise reference/pointer
// Complex Data - If doesn't need to be modified then const reference. Otherwise reference or pointer.

// *pointerVariable = dereference the pointerVariable ie. get the value of it
// &variable = reference to the variable ie. get a pointer to variable

int main()
{
    int input; 
    int output; 

    input = 5;
    output = SimpleFn1(input);
    std::cout << "input is now " << input << std::endl;
    std::cout << "output is now " << output << std::endl;


	input = 5;
	output = SimpleFn2(input);
	std::cout << "input is now " << input << std::endl;
	std::cout << "output is now " << output << std::endl;


	input = 5;
	output = SimpleFn3(&input);
	std::cout << "input is now " << input << std::endl;
	std::cout << "output is now " << output << std::endl;

	SimpleFn3(nullptr);

	int integerArray[5] = { 10, 20, 30, 40, 50 };
	int* arrayElementPtr = integerArray;

	std::cout << *arrayElementPtr << std::endl;
	++arrayElementPtr;
	std::cout << *arrayElementPtr << std::endl;

	int& arrayElementRef = integerArray[0];
	std::cout << arrayElementRef << std::endl;
	++arrayElementRef;
	std::cout << arrayElementRef << std::endl;
	std::cout << integerArray[0] << std::endl;
}
