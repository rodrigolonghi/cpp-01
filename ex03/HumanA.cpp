#include "HumanA.hpp"
#include <iostream>

HumanA::~HumanA() {}

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {
	this->_name = name;
}

void	HumanA::attack() const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
