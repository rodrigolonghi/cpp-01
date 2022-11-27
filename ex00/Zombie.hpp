#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void		announce( void ) const;
		void		setName( std::string );
		std::string	getName( void );
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
