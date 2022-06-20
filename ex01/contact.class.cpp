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
	std::cout << "Welcome to my amazing phonebook!!" << std::endl;
}

Contact::~Contact(void){
	std::cout << "Destructor called" << std::endl;
}

std::string	Contact::getContact(void) const {
	std::cout << "   Index  ";
	std::cout << " | ";
	std::cout << "First Name";	
	std::cout << " | ";
	std::cout << " Last Name";
	std::cout << " | ";
	std::cout << "  Nickname " << std::endl;

	return ("plop");
}