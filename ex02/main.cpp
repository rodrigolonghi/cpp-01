#include <iostream>

int	main( void ) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << std::left;
	std::cout.width(18); std::cout << "String address: " << &str << std::endl;
	std::cout.width(18); std::cout << "Pointer address: " << stringPTR << std::endl;
	std::cout.width(18); std::cout << "Reference adress: " << &stringREF << std::endl;

	std::cout.width(18); std::cout << "String: " << str << std::endl;
	std::cout.width(18); std::cout << "Pointer: " << *stringPTR << std::endl;
	std::cout.width(18); std::cout << "Reference: " << stringREF << std::endl;
}
