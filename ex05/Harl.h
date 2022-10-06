//
// Created by Josias Mutshaila kasongo on 2022-10-06.
//

#ifndef PISCINE_CPP01_HARL_H
#define PISCINE_CPP01_HARL_H

#include <iostream>

class Harl {
	public:
	Harl();

	void complain(const std::string &level) const;

	private:
	std::string managedLevels_[4];

	void (Harl::*lvl_fn_ptr_[4])() const;

	void debug() const;

	void info() const;

	void warning() const;

	void error() const;
};


#endif //PISCINE_CPP01_HARL_H
