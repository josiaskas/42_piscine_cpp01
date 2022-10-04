#include "Zombie.h"

int main(){
	const int N = 3;

	Zombie* gang = zombieHorde(N, "Horde J");
	for (int i = 0; i < N ; i++)
		gang[i].announce();

	delete[] gang;
	return (0);
}