//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#include "HumanB.h"

HumanB::HumanB(const std::string &name):name_(name), weapon_(nullptr){
}

void	HumanB::setWeapon(Weapon &w){
	weapon_ = &w;
}

void	HumanB::setWeapon(Weapon *w){
	weapon_ = w;
}

void	HumanB::attack()const{
	if (weapon_ != nullptr)
		std::cout << name_ <<" attacks with their " << weapon_->getType() << std::endl;
}