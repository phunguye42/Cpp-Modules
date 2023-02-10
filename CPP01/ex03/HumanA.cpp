
# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
: _name(name), _weapon(weapon)
{}

HumanA::~HumanA(){
}

void HumanA::attack(void) const{
	if (this->_weapon.getType() == "")
		std::cout << "no weapon to attack with" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}