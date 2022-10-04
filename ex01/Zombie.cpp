//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#include "Zombie.h"

Zombie::Zombie(){
	_name = "";
}

Zombie::Zombie(const std::string &str):_name(str){
};

Zombie::Zombie(const Zombie &z)
{
	_name = z._name;
}

Zombie::~Zombie(){
	std::cout << _name << " Destroyed"<< std::endl;
}

Zombie &Zombie::operator=(const Zombie &z){
	_name = z._name;
	return (*this);
}

void Zombie::setName(const std::string &str){
	_name = str;
}

void Zombie::announce(){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

