#ifndef CLAPTRAP_HPP
#define CLAPTRAPHPP

#include <string>

class ClapTrap
{
private:
	_name;
	_hitPoints;
	_energyPoints;
	_attackDamage;

public:
	ClapTrap(name);
	~ClapTrap(void);

	void	attack(const std::string& target);
	void	takeDamage(unsigned	int amount);
	void beRepaired(unsigned int amount);
}

#endif