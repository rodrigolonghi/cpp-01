#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie( std::string name ) {
	Zombie *zombie = new Zombie;

	zombie->setName(name);
	return zombie;
}

Zombie* zombieHorde( int N, std::string name ) {
	if (N < 0) {
		std::cout << "You need to put a positive number!\n";
		return NULL;
	}
	Zombie	*zombies = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombies[i].setName(name);
	}
	return zombies;
}
