#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) {}

Zombie::Zombie( std::string name ) {
	_name = name;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " has died!\n";
}

void Zombie::announce( void ) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

std::string Zombie::getName( void ) {
	return this->_name;
}

void Zombie::setName( std::string name ) {
	this->_name = name;
}
