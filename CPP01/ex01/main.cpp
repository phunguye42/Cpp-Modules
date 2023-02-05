#include "Zombie.hpp"
#define N 4

int main( void ){
    Zombie *zomz = zombieHorde(N, "zombi");

    for (size_t i = 0; i < N; i++) {
        zomz[i].announce();
    }

    delete [] zomz; //Delete is an operator that is used to destroy array and non-array(pointer) objects
    return 0;
}
