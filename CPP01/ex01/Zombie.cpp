#include "Zombie.hpp"

Zombie::Zombie(){
	return;
}

Zombie::~Zombie(void){
	std::cout << "Zombie " << this->_name << " has been destroyed." << std::endl;
	return;
}

void Zombie::setname(std::string name){
	this->_name = name;
	return;
}

void Zombie::announce(void){
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ" << std::endl;
	return;
}
