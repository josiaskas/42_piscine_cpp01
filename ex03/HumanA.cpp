//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#include "HumanA.h"

HumanA::HumanA(const std::string &name, const Weapon &weapon): name_(name), weapon_(weapon){
}

void	HumanA::attack()const{
	std::cout << name_ <<" attacks with their " << weapon_.getType() << std::endl;
}