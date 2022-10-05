//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//

#include "Weapon.h"

Weapon::Weapon(){
	type_ = "";
}

Weapon::Weapon(const std::string &type):type_(type){}

Weapon::~Weapon(){}

Weapon& Weapon::operator=(const Weapon &w){
	type_ = w.getType();
	return (*this);
}

const std::string&	Weapon::getType() const{
	return (type_);
}

void	Weapon::setType(const std::string &new_type){
	type_ = new_type;
}