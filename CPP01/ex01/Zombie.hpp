#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	
	public:
	std::string _name;

	Zombie();
	~Zombie();
	
	void announce(void);
	Zombie *newZombie(std::string name);
	void setname(std::string name);
	//void randomChump(std::string name);
};

//Zombie *newZombie(std::string name);
//void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);


# endif