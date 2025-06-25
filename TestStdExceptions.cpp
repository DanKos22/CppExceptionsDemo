/*
	`...
 `..   `..     `..        `..
`..            `..        `..
`..       `... `.....`... `.....
`..            `..        `..
 `..   `..     `..        `..
   `....

Michelle Lynch
*/

#include <iostream>       // cout, endl
#include <stdexcept>	  // out_of_range
#include <chrono>         // high_resolution_clock, microseconds
#include "StdExceptions.h"
#include "TestStdExceptions.h"


int Function3()
{
	std::cout << "Start Function3" << std::endl;
	throw(std::out_of_range("Exception thrown in Function3")); //Function 3 ends, looks for try catch
	std::cout << "End Function3" << std::endl;
	return 0;
}

int Function2()
{
	std::cout << "Start Function2" << std::endl;
	//Class1 obj;			// No problem with this, as destructor executed on stack unwind.
	//Class1* ptr = new Class1;	//Heap memory. This is bad code, breaks RAII design patter/concept, creates memory bug
	Function3();
	std::cout << "End Function2" << std::endl;
	return 0;
}

int Function1()
{
	std::cout << "Start Function1" << std::endl;
	try {
		Function2();
	}
	catch (std::out_of_range& e) {
		std::cout << "..." << std::endl;
		std::cerr << std::endl << e.what() << std::endl;
	}
	std::cout << "End Function1" << std::endl;
	return 0;
}