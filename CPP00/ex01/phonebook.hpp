#if ndef
# define PHONEBOOK_HPP

class Contact
{
	public:
	std::string	first_name;
	std::string	last_name;
	std::phone;
	std::email;
	std::address;
	std::birthday

	void	display(void)
	{
		std::cout << first_name last_name << ":" << std::endl;
		std::cout << "phone: " << phone << std::endl;
		std::cout << "email: " << email << std::endl;
		std::cout << "address: " << phone << std::endl;
		std::cout << "birthday: " << phone << std::endl;
	}
};

class Phonebook
{
	public:
	Contact Contact[8];
	int		num;
};

# endif