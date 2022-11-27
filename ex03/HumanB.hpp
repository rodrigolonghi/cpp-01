#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <string>

class HumanB {
	private:
		std::string	_name;
		Weapon*		_weapon;
	public:
		~HumanB();
		HumanB(std::string name);
		void	attack() const;
		void	setWeapon(Weapon& weapon);
};

#endif
