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

int	check_index(int nb_contact, std::string index)
{
	int	i;

	i = stoi(index);
	if (i > nb_contact || i <= 0 || i > 8)
		return 1;
	return 0;
}

int	main(int argc, char **argv)
{
	std::string	cmd;
	std::string index;
	Contact	contacts[8];
	int		nb_contact;
	int		max;
	int		i;

	nb_contact = 0;
	max = 0;
	std::cout << COLOR CYAN "Welcome to my amazing phonebook!!" RESET << std::endl;
	while ((cmd != "EXIT"))
	{
		std::cout << COLOR CYAN "Please enter a command (ADD / SEARCH / EXIT) : " RESET;
		std::cin >> cmd;
		if (cmd == "ADD" && (nb_contact % 8) == 0)
			nb_contact = 0;
		if (cmd == "ADD")
			contacts[nb_contact++] = create_contact(nb_contact + 1);
		if (nb_contact == 8)
			max = 8;
		else if (cmd == "SEARCH")
		{
			std::cout << COLOR MAGENTA "Index |First Name| Last Name|  Nickname" RESET << std::endl;
			i = 0;
			while (i < nb_contact || i < max)
			{
				contacts[i].print_contact();
				i++;
			}
			if (i != 0)
			{
				std::cout << COLOR CYAN "Please enter the index of the contact you would like to see" RESET << std::endl;
				std::cin >> index;
				while (check_index(nb_contact, index) == 1)
				{
					std::cout << COLOR RED "Please enter a valid index -> " RESET << std::endl;
					std::cin >> index;
				}
				int j = stoi(index) - 1;
				contacts[j].print_info();				
			}
		}
	}
	return (0);

}
