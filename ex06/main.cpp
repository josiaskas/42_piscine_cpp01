//
// Created by Josias Mutshaila kasongo on 2022-10-06.
//

#include "Harl.h"

int main(int argc, char *argv[])
{
	std::string level;
	Harl	mr_mad;

	if (argc == 2){
		level = argv[1];
		mr_mad.complain(level);
		return 0;
	}
	std::cerr << "Usage: ./HarlFilter <level | msg>"<<std::endl;
	return 1;
}