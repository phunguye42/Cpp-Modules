#ifndef SEDV2_HPP
#define SEDV2_HPP

#include <iostream>
#include <fstream>

class SedV2
{
	private:
		std::string _infile;
		std::string _outfile;
	
	public:
		SedV2(std::string filename);
		~SedV2();
	
	void	replace(std::string s1, std::string s2);
};

#endif