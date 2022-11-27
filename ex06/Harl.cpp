#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}
Harl::~Harl() {}

void Harl::complain( std::string level ) {
	std::string cmd[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	option = 3;

	for(int i = 0; i <= 3; i++) {
		if (cmd[i] == level)
			option = i;
	}
	switch (option){
		case 0:
			Harl::debug();
			std::cout << std::endl;
		case 1:
			Harl::info();
			std::cout << std::endl;
		case 2:
			Harl::warning();
			std::cout << std::endl;
		default:
			Harl::error();
	}
}

void Harl::debug( void ) {
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void ) {
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning( void ) {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void ) {
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n";
}
