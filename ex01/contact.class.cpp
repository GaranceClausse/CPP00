/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:31:50 by gclausse          #+#    #+#             */
/*   Updated: 2022/06/12 12:31:50 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void){
	
}

Contact::~Contact(void){
	
}

void		Contact::setIndex(int index)
{
	this->_index = index;
	return ;
}
void		Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
	return ;
}

void		Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
	return ;
}

void		Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
	return ;
}

void		Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
	return ;
}

void		Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
	return ;
}

int	Contact::getIndex(void) const
{
	return (this->_index);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string tenCharString(std::string str)
{
	int	size;

	size = str.size();
	if (size <= 9)
	{
		str.insert(0, (10 - size), ' ');
	}
	else if (size > 10)
	{
		str.resize (9);
		str.resize (10,'.');
	}
	return (str);
}

void 	Contact::print_contact()
{
	std::string	name;
	std::string	lastName;
	std::string	nickname;


	name = this->_firstName;
	lastName = this->_lastName;
	nickname = this->_nickname;
	std::cout <<  "   " << this->_index;
	std::cout <<  "  |";
	std::cout <<  tenCharString(name);
	std::cout << "|" <<  tenCharString(lastName) ;
	std::cout << "|" <<  tenCharString(nickname) << std::endl;
}

void 	Contact::print_info()
{
	std::cout << COLOR MAGENTA "The contact you searched for is :" RESET << std::endl;
	std::cout << COLOR CYAN "First name : 	  " RESET << this->_firstName << std::endl;
	std::cout << COLOR CYAN "Last name :	  " RESET << this->_lastName << std::endl;
	std::cout << COLOR CYAN "Nickname : 	  " RESET << this->_nickname << std::endl;
	std::cout << COLOR CYAN "Phone number :    " RESET << this->_phoneNumber << std::endl;
	std::cout << COLOR CYAN "Darkest Secret :  " RESET << this->_darkestSecret << std::endl;
}

Contact	create_contact(int index)
{
	Contact	newContact;
	std::string cmd;

	std::cout << COLOR MAGENTA "Ready to add a new contact to your phonebook?" RESET<< std::endl;

	newContact.setIndex(index);
	std::getline (std::cin, cmd);
	std::cout << "First Name ->		" ;
	std::cin.clear();
	std::getline (std::cin, cmd);
	while (cmd.empty() && !std::cin.eof())
	{
		std::cout << COLOR RED "You cannot enter an empty field. Please type your first name" RESET << std::endl;
		std::cout << "First Name ->		" ;
		std::getline (std::cin, cmd);
	}
	newContact.setFirstName(cmd);
	std::cout << "Last Name ->		" ;
	std::getline (std::cin, cmd);
	while (cmd.empty() && !std::cin.eof())
	{
		std::cout << COLOR RED "You cannot enter an empty field. Please type your last name" RESET << std::endl;
		std::cout << "Last Name ->		" ;
		std::getline (std::cin, cmd);
	}
	newContact.setLastName(cmd);
	std::cout << "Nickname ->		" ;
	std::getline (std::cin, cmd);
	while (cmd.empty() && !std::cin.eof())
	{
		std::cout << COLOR RED "You cannot enter an empty field. Please type your nickname" RESET << std::endl;
		std::cout << "Nickname ->		" ;
		std::getline (std::cin, cmd);
	}
	newContact.setNickname(cmd);
	std::cout << "Phone number ->		" ;
	std::getline (std::cin, cmd);
	while (cmd.empty() && !std::cin.eof())
	{
		std::cout << COLOR RED "You cannot enter an empty field. Please type your phone number" RESET << std::endl;
		std::cout << "Phone number ->		" ;
		std::getline (std::cin, cmd);
	}
	newContact.setPhoneNumber(cmd);
	std::cout << "Darkest secret ->	" ;
	std::getline (std::cin, cmd);
	while (cmd.empty() && !std::cin.eof())
	{
		std::cout << COLOR RED "You cannot enter an empty field. Please type your darkest secret" RESET<< std::endl;
		std::cout << "Darkest secret ->	" ;
		std::getline (std::cin, cmd);
	}
	newContact.setDarkestSecret(cmd);


	return (newContact);
}