#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
	Harl	harl;

	if (argc != 2) {
		std::cout << "Invalid number of arguments!\nYou must to use DEBUG, INFO, WARNING or ERROR.\n";\
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}
