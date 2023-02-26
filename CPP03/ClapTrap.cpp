#include "ClapTrap.hpp"


ClapTrap(): _name("default"){
	this->_hitPoints = 10
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap(std::string name): _name(name){
	this->_hitPoints = 10
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap(const ClapTrap& copy){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}



~ClapTrap(void){
}

void	takeDamage(unsigned	int amount){
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " of damage." << std::endl;
}

void	attack(const std::string& target) {
	target.takeDamage(_attackDamage);
}

void beRepaired(unsigned int amount){
	
}