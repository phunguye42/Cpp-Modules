#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>


class Contact
{
	public:
	std::string		first_name;
	std::string		last_name;
	std::string		nick_name;
	std::string		phone_number;
	std::string		darkest_secret;
	

	void	display(void)
	{
		std::cout << first_name << last_name << ":" << std::endl;
		std::cout << "nick_name: " << nick_name << std::endl;
	}
};

class Phonebook
{
	public:
	Contact contact[8];
	int		index;

	/*void	add_contact(Contact *contact)
	{
		std::cout << "type firstname: ";
		std::cin >> contact->first_name;

		std::cout << "type lastname: ";
		std::cin >> contact->last_name;
		while (contact->last_name.size() < 10)
			contact->last_name.append(" ");

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
	}*/
};

#endif