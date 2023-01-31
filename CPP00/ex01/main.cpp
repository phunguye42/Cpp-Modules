#include "Phonebook_class.hpp"

void rotate_str(std::string str)
{
	char temp = str[9]; //here

	while(str[9] == ' ')
	{
		for(int i = 9; i >= 0; i--)
			str[i] = str[i - 1];
	}
	str[0] = temp;
}

int	main(void)
{
	Phonebook PB;
	std::string	command; 
	int			selector;
	int			index = 0;
	PB.index = 0;

	while(1)
	{
		system("clear");
		std::cout << "Type command: ADD, SEARCH or EXIT" << std::endl << "$: ";
		std::cin >> command;

		if (command == "ADD" || command == "add")
		{
			system("clear");
			PB.add_contact();
			system("clear");
			index++;
		}
		if (command == "SEARCH" || command == "search")
		{
			system("clear");
			PB.display_contacts();
			system("clear");
		}
	}
}
