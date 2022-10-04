//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#include <iostream>

int main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adresse\n"
	          << "str: " << &str
			  << " ptr: " << stringPTR
			  << " ref: " << &stringREF << std::endl;
	std::cout << "\nValeur:\n"
	          << "str: " << str
			  << " ptr: " << *stringPTR
			  << " ref: " << stringREF << std::endl;
	return (0);
}