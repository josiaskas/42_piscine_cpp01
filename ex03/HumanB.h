//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#ifndef PISCINE_CPP01_HUMANB_H
#define PISCINE_CPP01_HUMANB_H
#include "Weapon.h"

class HumanB {
	public:
		HumanB(const std::string &name);

		void	setWeapon(Weapon *w);
		void	setWeapon(Weapon &w);
		void	attack()const;
	private:
		std::string		name_;
		Weapon			*weapon_;
};


#endif //PISCINE_CPP01_HUMANB_H
