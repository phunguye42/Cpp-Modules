
# include "humanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	this->_weapon = NULL;
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon& weapon){
	this->_weapon = &weapon;
}

void HumanB::attack(void) const{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}