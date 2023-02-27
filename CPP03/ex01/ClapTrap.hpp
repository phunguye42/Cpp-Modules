#ifndef CLAPTRAP_HPP
#define CLAPTRAPHPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

public:
	ClapTrap(); 							//default constructor
	ClapTrap(std::string name); 			//pass in name constructor
	ClapTrap(const ClapTrap& copy); 		//copy constructor
	~ClapTrap(void); 						//destructor

	void	attack(const std::string& target);
	void	takeDamage(unsigned	int amount);
	void beRepaired(unsigned int amount);
};

#endif