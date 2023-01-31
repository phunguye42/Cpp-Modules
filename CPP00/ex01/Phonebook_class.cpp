#include "Phonebook_class.hpp"

void	Phonebook::display_contacts()
{
	std::string	exit;
	int	i = 0;
	while(i < 8)
	{
		std::cout << i + 1 << "       |";
		std::cout << contact[i].first_name << "|";
		std::cout << contact[i].last_name << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "EXIT: any key" << std::endl << "$: ";
	std::cin >> exit;
}

void	Phonebook::add_contact()
{
	std::cout << "type firstname: ";
	std::cin >> contact->first_name;


	std::cout << "type lastname: ";
	std::cin >> contact->last_name;
	//format(contact->last_name);

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