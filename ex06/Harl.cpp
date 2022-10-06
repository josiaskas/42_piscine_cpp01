//
// Created by Josias Mutshaila kasongo on 2022-10-06.
//

#include "Harl.h"

Harl::Harl() : managedLevels_(), lvl_fn_ptr_()
{
	managedLevels_[0] = "DEBUG";
	managedLevels_[1] = "INFO";
	managedLevels_[2] = "WARNING";
	managedLevels_[3] = "ERROR";
	lvl_fn_ptr_[0] = &Harl::debug;
	lvl_fn_ptr_[1] = &Harl::info;
	lvl_fn_ptr_[2] = &Harl::warning;
	lvl_fn_ptr_[3] = &Harl::error;
}

void Harl::complain(const std::string &level) const
{
	size_t i = 0;

	for (; i < managedLevels_->length(); i++)
		if (managedLevels_[i] == level)
			break;

	switch (i)
	{
		case 0:
			(this->*lvl_fn_ptr_[0])();
			std::cout << std::endl;
		case 1:
			(this->*lvl_fn_ptr_[1])();
			std::cout << std::endl;
		case 2:
			(this->*lvl_fn_ptr_[2])();
			std::cout << std::endl;
		case 3:
			(this->*lvl_fn_ptr_[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
					  << std::endl;
	}
}

void Harl::debug() const
{
	std::cout << "[ " << managedLevels_[0] << " ]\n"
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger.\n"
			  << "I really do !\n";
}

void Harl::info() const
{
	std::cout << "[ " << managedLevels_[1] << " ]\n"
			  << "I cannot believe adding extra bacon costs more money.\n"
			  << "You didn’t put enough bacon in my burger !\n"
			  << "If you did, I wouldn’t be asking for more !\n";
}

void Harl::warning() const
{
	std::cout << "[ " << managedLevels_[2] << " ]\n"
			  << "I think I deserve to have some extra bacon for free.\n"
			  << "I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error() const
{
	std::cout << "[ " << managedLevels_[3] << " ]\n"
			  << "This is unacceptable ! I want to speak to the manager now."
			  << std::endl;
}
