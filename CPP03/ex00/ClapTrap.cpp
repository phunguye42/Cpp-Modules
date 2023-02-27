#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default") {
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name){
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(void){
	std::cout << _name << " destructor called, bye bye." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if(_hitPoints = 0){
		std::cout << "ClapTrap " << _name << " already has no hit points left." << std::endl;
		return;
	}
	this->_hitPoints -= amount;
	if(_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage." << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
	_energyPoints -= 1;
}

void ClapTrap::beRepaired(unsigned int amount){
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " is repaired " << amount << " of hit points." << std::endl;
}

