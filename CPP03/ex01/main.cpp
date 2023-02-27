
#include "ClapTrap.hpp"

int main()
{
	ClapTrap defaultZero;
	ClapTrap defaultnOne("Default_1");
	ClapTrap defaultnTwo("Default_2");

	ClapTrap copyTwo(defaultnTwo);
	
	defaultnOne.attack("Default_2");
	defaultnTwo.takeDamage(0);

	return(0);
}