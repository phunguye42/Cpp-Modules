/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 03:43:10 by codespace         #+#    #+#             */
/*   Updated: 2023/01/31 03:51:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	public:
	bool	activated = false;
	std::string		first_name;
	std::string		last_name;
	std::string		nick_name;
	std::string		phone_number;
	std::string		darkest_secret;

	void	format_fields();
};

class Phonebook
{
	public:
	Contact contact[8];

	void	add_contact(Contact *contact);
	void	display_contact(int	index);
};

#endif