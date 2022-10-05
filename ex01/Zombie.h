//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#ifndef EX00_ZOMBIE_H
#define EX00_ZOMBIE_H

#include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie(const std::string &name);
		Zombie(const Zombie &z);
		~Zombie();

		Zombie &operator=(const Zombie &z);
		void	setName(const std::string &new_name);
		void	announce();
	private:
		std::string name_;
};

Zombie*	zombieHorde(int N, std::string name);

#endif //EX00_ZOMBIE_H
