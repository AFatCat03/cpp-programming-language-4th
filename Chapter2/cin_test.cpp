#include <iostream>
#include <string>

void cin_test()
{
	bool boolVal;
	char charVal;
	int intVal;
	double doubleVal;
	std::string stringVal;
	std::cin >> boolVal;
	std::cin >> charVal;
	std::cin >> intVal;
	std::cin >> doubleVal;
	std::cin >> stringVal;
	std::cout << boolVal << " " << charVal << " "
		<< intVal << " " << doubleVal << " " << stringVal;
}