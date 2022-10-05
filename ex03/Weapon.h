//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#ifndef PISCINE_CPP01_WEAPON_H
#define PISCINE_CPP01_WEAPON_H
#include <iostream>

class Weapon {
	public:
		Weapon();
		Weapon(const std::string &type);
		~Weapon();

		Weapon &operator=(const Weapon &w);
		const std::string	&getType() const;
		void				setType(const std::string &new_type);
	private:
		std::string type_;
};


#endif //PISCINE_CPP01_WEAPON_H
