//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#ifndef PISCINE_CPP01_HUMANA_H
#define PISCINE_CPP01_HUMANA_H
#include "Weapon.h"

class HumanA {
	public:
		HumanA(const std::string &name, const Weapon &weapon);
		void	attack()const;
	private:
		std::string		name_;
		const Weapon&	weapon_;
};


#endif //PISCINE_CPP01_HUMANA_H
