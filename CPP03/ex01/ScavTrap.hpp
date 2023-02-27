# include <string>
# include <iostream>

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(); 							//default constructor
	ScavTrap(std::string name); 			//pass in name constructor
	ScavTrapp(const ClapTrap& copy); 		//copy constructor
	~ScavTrap(void); 						//destructor

	void	attack(const std::string& target); //change these
	void	takeDamage(unsigned	int amount);
	void beRepaired(unsigned int amount);
};



