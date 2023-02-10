#include "Harl.hpp"

int main(void){

    std::string input;
    Harl        harl;

    do
    {
		std::cout << "type 'exit' to exit." << std::endl;
		std::cout << "levels: DEBUG | INFO | WARNING | ERROR" << std::endl;
        std::cout << "Enter a level: ";
        std::cin >> input;
        harl.complain(input);
    } while (input.compare("exit"));

    return EXIT_SUCCESS;
}

/*
do{}while(){} is similar to while(){} except it checks for the condition after completing
codeblock once.
*/