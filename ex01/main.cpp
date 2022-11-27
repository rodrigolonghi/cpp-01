#include "Zombie.hpp"
#include <iostream>

int	main( void ) {
	int N = 3;

	Zombie *zombies = zombieHorde(N, "Horde");
	for (int i = 0; i < N; i++){
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}
