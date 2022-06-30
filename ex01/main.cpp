/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:34:14 by gclausse          #+#    #+#             */
/*   Updated: 2022/06/12 12:34:14 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.class.hpp"
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string	cmd;
	Contact	contacts[8];
	int		nb_contact;
	int		i;

	nb_contact = 0;
	std::cout << COLOR CYAN "Welcome to my amazing phonebook!!" RESET << std::endl;
	while ((cmd != "EXIT"))
	{
		std::cout << COLOR CYAN "Please enter a command (ADD / SEARCH / EXIT) : " RESET;
		std::cin >> cmd;
		if (cmd == "ADD" && nb_contact >= 8)
			std::cout << COLOR RED "Your phonebook is full!!" RESET << std::endl;
		else if (cmd == "ADD")
			contacts[nb_contact++] = create_contact(nb_contact + 1);
		else if (cmd == "SEARCH")
		{
			std::cout << COLOR MAGENTA "Index |First Name| Last Name|  Nickname" RESET << std::endl;
			i = 0;
			while (i < nb_contact)
			{
				contacts[i].print_contact();
				i++;
			}
			if (i != 0)
				std::cout << COLOR CYAN "Please enter the index of the contact you would like to see" RESET << std::endl;
			
		}
	}
	return (0);

}
