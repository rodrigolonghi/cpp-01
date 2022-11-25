#include "Zombie.hpp"
#include <iostream>

int	main( void ) {
	Zombie *zombie = newZombie("Alberto");

	std::cout << "The new zombie, " << zombie->getName() << ", has been created, but not annouced.\n";
	randomChump("Maria");
	delete zombie;
	return (0);
}
