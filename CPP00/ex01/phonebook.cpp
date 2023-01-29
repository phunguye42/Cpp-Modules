#include "phonebook.hpp"

void rotate_str(std::string *str)
{
	char temp = str[9]; //here

	while(str[9] == " ")
	{
		for(int i = 9; i >= 0; i--)
			str[i] = str[i - 1];
	}
	str[0] = temp;
}

void	add_contact(Contact *contact)
{
	std::cout << "type firstname: ";
	std::cin >> contact->first_name;

	std::cout << "type lastname: ";
	std::cin >> contact->last_name;
	while (contact->last_name.size() < 10)
		contact->last_name.append(" ");
		rotate_str(contact->last_name);
	}
	std::cout << "type nickname: ";
	std::cin >> contact->nick_name;
	while (contact->nick_name.size() < 10)
		contact->nick_name.append(" ");

	std::cout << "type phone number: ";
	std::cin >> contact->phone_number;
	while (contact->phone_number.size() < 10)
		contact->phone_number.append(" ");

	std::cout << contact->first_name << "'s darkest secret: ";
	std::cin >> contact->darkest_secret;
	while (contact->darkest_secret.size() < 10)
		contact->darkest_secret.append(" ");
	
	while (contact->first_name.size() < 10)
		contact->first_name.append(" ");
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
			add_contact(&PB.contact[index % 8]);
			system("clear");
			index++;
		}
		if (command == "SEARCH" || command == "search")
		{
			int	i = 0;
			while(i < 8)
			{
				std::cout << i + 1 << "       |";
				std::cout << PB.contact[i].first_name;
				std::cout << std::endl;
				i++;
			}
			while(1);
		}
	}
}
