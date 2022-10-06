//
// Created by Josias Mutshaila kasongo on 2022-10-06.
//

#include "Harl.h"

int main()
{
	Harl one_guy;
	Harl elon;

	one_guy.complain("DEBUG");
	std::cout.put('\n');
	elon.complain("INFO");
	std::cout.put('\n');
	one_guy.complain("IN LINGALA");
	std::cout.put('\n');
	one_guy.complain("ERROR");
	return 0;
}