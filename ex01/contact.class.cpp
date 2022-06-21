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
/*
std::string	Contact::getContact(void) const {
	std::cout << "   Index  ";
	std::cout << " | ";
	std::cout << "First Name";	
	std::cout << " | ";
	std::cout << " Last Name";
	std::cout << " | ";
	std::cout << "  Nickname " << std::endl;

	return ("plop");
}*/

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

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

void 	Contact::print_contact()
{
	std::cout << "First Name -> " << this->_firstName << std::endl;
}

Contact	create_contact()
{
	Contact	newContact;
	std::string cmd;

	std::cout << "Ready to add a new contact to your phonebook?" << std::endl;

	std::cout << "First Name ->	" ;
	std::cin.clear();
	std::getline (std::cin, cmd);
	newContact.setFirstName(cmd);
	std::cout << "Last Name ->	" ;
	std::getline (std::cin, cmd);
	newContact.setLastName(cmd);
	std::cout << "Nickname ->	" ;
	std::getline (std::cin, cmd);
	newContact.setNickname(cmd);
	std::cout << "Phone number ->	" ;
	std::getline (std::cin, cmd);
	newContact.setPhoneNumber(cmd);
	std::cout << "Darkest secret ->	" ;
	std::getline (std::cin, cmd);
	newContact.setDarkestSecret(cmd);

	return (newContact);
}