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
	Contact	instance;

	
	while ((cmd != "EXIT"))
	{
		std::cout << "Please enter a command (ADD / SEARCH / EXIT) : ";
		std::cin >> cmd;
		if (cmd == "ADD")
			std::cout << "ADD" << std::endl;
		else if (cmd == "SEARCH")
		{
			std::cout << "   Index  ";
			std::cout << " | ";
			std::cout << "First Name";	
			std::cout << " | ";
			std::cout << " Last Name";
			std::cout << " | ";
			std::cout << "  Nickname " << std::endl;
		}

	}
	return (0);

}
