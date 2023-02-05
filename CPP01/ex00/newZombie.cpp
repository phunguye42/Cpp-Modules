#include "Zombie.hpp"

//add zombie to heap
Zombie* newZombie(std::string name){
	return(new Zombie(name));
}

