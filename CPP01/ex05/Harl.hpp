#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Harl();
	~Harl();

	void complain(std::string level);
};

//declares a type t_func that points to a function in Harl:: namespace
//that returns void and has void parameters
typedef void (Harl::*t_func) (void);

#endif