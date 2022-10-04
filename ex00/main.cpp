#include "Zombie.h"

int main(){
	Zombie* z = newZombie("JosiasH");
	Zombie* zz = newZombie("Kant_H");
	Zombie* zzz = newZombie("Newton_H");

	z->announce();
	zz->announce();
	zzz->announce();
	randomChump("Messi");
	randomChump("Lebron");

	delete z;
	delete zz;
	delete zzz;

	return (0);
}