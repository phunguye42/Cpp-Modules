/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 03:42:44 by codespace         #+#    #+#             */
/*   Updated: 2023/01/31 04:16:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook_class.hpp"

int	main(void)
{
	Phonebook PB;
	std::string	command; 
	int	selector;
	int	index = 0;
	
	while(1)
	{
		system("clear");
		std::cout << "Type command: ADD, SEARCH or EXIT" << std::endl << "$: ";
		std::cin >> command;

		if (command == "ADD" || command == "add")
		{
			system("clear");
			PB.add_contact(&PB.contact[index % 8]);
			system("clear");
			index++;
		}
		if (command == "SEARCH" || command == "search")
		{
			std::cout << "contact number to display 1 - 8:" << std::endl << "$: ";
			std::cin >> selector;
			if(selector >= 0 && selector <= 8){
				system("clear");
				PB.display_contact(selector);
				system("clear");
			}
			else
				std::cout << "invalid selection";
		}
		if (command == "EXIT" || command == "exit")
		{
			break ;
		}
	}
	std::cout << "closing Phonebook" << std::endl;
	return(0);
}
