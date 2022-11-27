#include "Zombie.hpp"
#include <iostream>

int	main( void ) {
	Zombie *zombie = newZombie("Alberto");
	std::cout << "The new zombie, " << zombie->getName() << ", has been created, but not annouced.\n";
	delete zombie;

	randomChump("Maria");

	Zombie stack_zombie("Harry");
	stack_zombie.announce();
	return (0);
}
