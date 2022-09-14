/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:25:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/06/12 12:25:07 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.class.hpp"

PhoneBook::~PhoneBook(void){
	
}

int	check_index(int nb_contact, int max_contact, std::string index)
{
	int	i;

	stringstream degree(index);
	degree >> i;
	if ((i > nb_contact && i > max_contact) || i <= 0 || i > 8)
		return 1;
	return 0;
}

int	PhoneBook::get_nbcontact(void) const
{
	return (this->_nb_contact);
}

void		PhoneBook::set_nbcontact(int nb_contact)
{
	this->_nb_contact = nb_contact;
	return ;
}

Contact 	PhoneBook::get_contact(int index) const
{
	return (this->_contacts[index]);
}

void 	PhoneBook::print_phoneBook() const
{
	for (int i = 0; i < this->_nb_contact; ++i)
	{
		get_contact(i).print_info();
	}
}

void 	PhoneBook::add_contact()
{
	if (this->_nb_contact % 8 == 0)
			this->_nb_contact = 0;
	_contacts[get_nbcontact()] = create_contact(this->_nb_contact + 1);
	set_nbcontact(_nb_contact + 1);
	if (this->_nb_contact == 8)
		this->_max_contact = 8;
}

void	PhoneBook::search_contact() const
{
	int	i;
	int	j;
	std::string index;

	i = 0;
	if (this->_nb_contact == 0 && this->_max_contact == 0)
		std::cout << COLOR RED "Your phonebook is empty, please add contacts first!" RESET << std::endl;
	else
		std::cout << COLOR MAGENTA "Index |First Name| Last Name|  Nickname" RESET << std::endl;
	while (i < this->_nb_contact || i < this->_max_contact)
	{
		get_contact(i).print_contact();
		i++;
	}
	if (i != 0)
	{
		std::cout << COLOR CYAN "Please enter the index of the contact you would like to see" RESET << std::endl;
		std::getline (std::cin, index);
		while (check_index(this->_nb_contact, this->_max_contact, index) == 1 && !std::cin.eof())
		{
			std::cout << COLOR RED "Please enter a valid index -> " RESET << std::endl;
			std::getline (std::cin, index);
		}
		if (!std::cin.eof())
		{
			stringstream degree(index);
			degree >> j;
			j -= 1;
			get_contact(j).print_info();
		}			
	}
	
}

int	main(int argc, char **argv)
{
	PhoneBook	phoneBook;
	std::string	cmd;
	int		max;
	(void)argv;

	max = 0;
	if (argc != 1)
	{
		std::cout << "Error : the program doesn't handle arguments"<< std::endl;
		return (1);
	}
	std::cout << COLOR CYAN "Welcome to my amazing phonebook!!" RESET << std::endl;
	while ((cmd != "EXIT") && !std::cin.eof())
	{
		std::cout << COLOR CYAN "Please enter a command (ADD / SEARCH / EXIT) : " RESET;
		std::getline (std::cin, cmd);
		if (cmd == "ADD")
			phoneBook.add_contact();
		else if (cmd == "SEARCH")
			phoneBook.search_contact();
	}
	return (0);

}
