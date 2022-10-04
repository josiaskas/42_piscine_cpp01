//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//
#include "Zombie.h"

Zombie* newZombie(std::string name){
	return (new Zombie(name));
}