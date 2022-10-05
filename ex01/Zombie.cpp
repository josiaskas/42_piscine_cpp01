//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#include "Zombie.h"

Zombie::Zombie(){
	name_ = "";
}

Zombie::Zombie(const std::string &name):name_(name){
};

Zombie::Zombie(const Zombie &z){
	name_ = z.name_;
}

Zombie::~Zombie(){
	std::cout << name_ << " Destroyed"<< std::endl;
}

Zombie &Zombie::operator=(const Zombie &z){
	name_ = z.name_;
	return (*this);
}

void Zombie::setName(const std::string &new_name){
	name_ = new_name;
}

void Zombie::announce(){
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

