/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:20:26 by gclausse          #+#    #+#             */
/*   Updated: 2022/06/12 12:20:26 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <string>

#define COLOR "\033[;"
#define RED "31m"
#define GREEN "32m"
#define YELLOW "33m"
#define BLUE "34m"
#define MAGENTA "35m"
#define CYAN "36m"
#define B_RED "41m"
#define B_GREEN "42m"
#define B_YELLOW "43m"
#define B_BLUE	"44m"
#define RESET "\033[0m"

class Contact {
public :
	Contact(void);
	~Contact(void);
	int	getIndex(void) const;
	void	setIndex(int index);
	std::string	getFirstName(void) const;
	void	setFirstName(std::string s);
	std::string	getLastName(void) const;
	void	setLastName(std::string s);
	std::string	getNickname(void) const;
	void	setNickname(std::string s);
	std::string	getDarkestSecret(void) const;
	void	setDarkestSecret(std::string s);
	std::string	getPhoneNumber(void) const;
	void	setPhoneNumber(std::string	s);
	
	void	print_contact();
	void	print_info();


private :
	int			_index;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_darkestSecret;
	std::string	_phoneNumber;
};

Contact	create_contact(int index);