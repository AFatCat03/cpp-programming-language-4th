#include <iostream>
#include <string>

void cout_test()
{
	bool boolVal = true;
	char charVal = 'a';
	int intVal = 1;
	double doubleVal = 2.0;
	std::string stringVal = "hello";
	std::cout << boolVal << " " << charVal << " "
		<< intVal << " " << doubleVal << " " << stringVal;
}