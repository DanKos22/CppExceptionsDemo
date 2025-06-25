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

#ifndef STDEXCEPT_H_INCLUDED
#define STDEXCEPT_H_INCLUDED

#include <iostream>

class Class1 {
public:
	Class1() { std::cout << "Class1 constructor called" << std::endl; }
	~Class1() { std::cout << "Class1 destructor called" << std::endl; }
};

#endif // STDEXCEPT_H_INCLUDED
