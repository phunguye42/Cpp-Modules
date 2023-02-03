#include "zombie.hpp"


//add zombie to heap
Zombie* Zombie::newZombie(std::string new_name){
	Zombie newZombie;

	newZombie.name = new_name;
	announce();
	return(&newZombie);
}

