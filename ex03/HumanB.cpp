#include "HumanB.hpp"
#include <iostream>

HumanB::~HumanB() {}

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weapon = NULL;
}

void	HumanB::attack() const {
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}
