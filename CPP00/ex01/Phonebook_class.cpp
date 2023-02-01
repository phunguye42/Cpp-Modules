/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phunguye <phunguye@student.42.fr>        +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 03:43:04 by phunguye         #+#    #+#              */
/*   Updated: 2023/01/31 04:09:29 by phunguye        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook_class.hpp"

void	format(std::string *data)
{
	while (data->size() < 10)
		data->append(" ");
	if((*data)[9] != ' '){
		(*data)[9] = '.';
		(*data) = data->substr(0, 10);
	}
	while((*data)[9] == ' '){
		int	i = 9;
		while(i > 0){
			(*data)[i] = (*data)[i - 1];
			i--;
		}
		(*data)[0] = ' ';
	}
}

void	Contact::format_fields(void)
{
	format(&first_name);
	format(&last_name);
	format(&nick_name);
	format(&phone_number);
	format(&darkest_secret);
}

void	Phonebook::display_contact(int	index)
{
	std::string exit;
	index--;
	if(contact[index].activated){
		std::cout << "contact " << index + 1 << std::endl;
		std::cout << index + 1 << "       |";
		std::cout << contact[index].first_name << "|";
		std::cout << contact[index].last_name << "|";
		std::cout << contact[index].nick_name << "|";
		std::cout << std::endl;
	}
	else
		std::cout << "contact " << index + 1 << " not added" << std::endl;
	std::cout << "EXIT: any key" << "$: ";
	std::cin >> exit;
}

void	Phonebook::add_contact(Contact *contact)
{
	std::cout << "type firstname: ";
	std::cin >> contact->first_name;
	std::cout << "type lastname: ";
	std::cin >> contact->last_name;
	std::cout << "type nickname: ";
	std::cin >> contact->nick_name;
	std::cout << "type phone number: ";
	std::cin >> contact->phone_number;
	std::cout << contact->first_name << "'s darkest secret: ";
	std::cin >> contact->darkest_secret;
	contact->format_fields();
	contact->activated = true;
}