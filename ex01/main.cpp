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

	nb_contact = 0;
	std::cout << "Welcome to my amazing phonebook!!" << std::endl;
	while ((cmd != "EXIT"))
	{
		std::cout << "Please enter a command (ADD / SEARCH / EXIT) : ";
		std::cin >> cmd;
		if (cmd == "ADD" && nb_contact >= 8)
			std::cout << "Your phonebook is full!!" << std::endl;
		else if (cmd == "ADD")
			contacts[nb_contact++] = create_contact();
		else if (cmd == "SEARCH")
		{
			contacts[0].print_contact();
		}

	}
	return (0);

}
