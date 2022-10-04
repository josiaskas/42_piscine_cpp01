//
// Created by Josias Mutshaila kasongo on 2022-10-04.
//
#include "Zombie.h"

Zombie*	zombieHorde(int N, std::string name){
	Zombie *first = nullptr;

	if (N > 0){
		first = new (std::nothrow) Zombie[N];
		if (first == nullptr)
			return (first);
		for(int i = 0; i < N; i++)
			first[i].setName(name);
	}
	return(first);
}