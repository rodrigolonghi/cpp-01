#include <iostream>
#include <fstream>
#include <string>

std::string replace(std::string line, std::string actual_value, std::string new_value) {
	int index;

	if (actual_value.empty())
		return (line);
	index = 0;
	while (true) {
		index =	line.find(actual_value, index);
		if (index == -1)
			return (line);
		line.erase(index, actual_value.length());
		line.insert(index, new_value);
		index += new_value.length();
	}
}

int main(int argc, char **argv)
{
	std::ifstream	file;
	std::ofstream	file_replace;
	std::string		file_name;
	std::string		line;

	if (argc != 4) {
		std::cout << "Wrong number of arguments!\n";
		return 1;
	}
	file.open(argv[1]);
	if (!file.is_open()) {
		std::cout << "Can't open file: " << argv[1] << std::endl;
		return 1;
	}
	file_name = argv[1];
	file_replace.open(file_name + ".replace");
	while (getline(file, line)) {
		line = replace(line, argv[2], argv[3]);
		file_replace << line << std::endl;
	}
	file.close();
	return 0;
}
