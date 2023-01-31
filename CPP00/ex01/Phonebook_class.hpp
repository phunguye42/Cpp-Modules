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

	void	add_contact();
	void	display_contacts();
};

#endif