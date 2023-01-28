#include "phonebook.hpp"
#include <iostream>
#include <string>

void	add_contact(Contact contact);

int	main(void)
{
	Phonebook PB;
	std::string	command;
	int			selector;
	int			index = 0;
	Phonebook.index = 0;

	while(1)
	{
		system("clear");
		std::cout << "Type command: ADD, SEARCH or EXIT" << std::endl << "$: ";
		std::cin >> command;

		if (command == "ADD")
		{
			system("clear");
			add_contact(PB.contact[index % 8])
			index++;
		}
	}
}

void	add_contact(Contact contact)
{
	std::cout << "type firstname: ";
	std::cin >> contact.first_name;
	while (contact.fist_name.size() < 10)
		contact.first_name.append(" ");
	system("clear");

	std::cout << "type lastname: ";
	std::cin >> contact.last_name;
	while (contact.last_name.size() < 10)
		contact.last_name.append(" ");
	system("clear");

	std::cout << "type nickname: ";
	std::cin >> contact.nick_name;
	while (contact.nick_name.size() < 10)
		contact.nick_name.append(" ");
	system("clear");

	std::cout << "type phone number: ";
	std::cin >> contact.phone_number;
	while (contact.phone_number.size() < 10)
		contact.phone_number.append(" ");
	system("clear");

	std::cout << contact.first_name << "'s darkest secret";
	std::cin >> contact.darkest_secret;
	while (contact.darkest_secret.size() < 10)
		contact.phone_number.append(" ");
	system("clear");
}