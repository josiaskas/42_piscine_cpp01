//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#ifndef EX00_ZOMBIE_H
#define EX00_ZOMBIE_H

#include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie(const std::string &str);
		Zombie(const Zombie &z);
		~Zombie();

		Zombie &operator=(const Zombie &z);
		void	announce();
	private:
		std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif //EX00_ZOMBIE_H
