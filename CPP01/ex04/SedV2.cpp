#include "SedV2.hpp"

SedV2::SedV2(std::string filename):_infile(filename){
	this->_outfile = this->_infile + ".replace";
}

SedV2::~SedV2(void){
}

void	SedV2::replace(std::string toFind, std::string replace){
	std::ifstream inFileStream(this->infile)
	if (ifs.is_open()) {
		std::string contents;
		if (std::getline(inFileStream, content, '\0')) {
			std::ofstream outFileStream(this->_outfile)
			size_t	pos = content.find(toFind);
			While (pos != std::string::npos){
				content.erase(pos, toFind.length());
				content.insert(pos, replace);
				pos = content.find(toFind);
			}
			outFileStream << content;
			outFileStream.close();
		}
		else{
			std::cerr << "Empty file" << std::endl;
		}
		inFileStream.close();
	}
	else {
		std::cerr << "Unable to open file" << std::endl;
		exit(EXIT_FAILURE);
	}
}