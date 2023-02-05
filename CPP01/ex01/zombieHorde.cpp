# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *zomz = new Zombie[N]; // Allocate Heap memory
	for(int i = 0; i < N; i++){
		zomz[i]._name = name;
	}
	return zomz;
}
 
