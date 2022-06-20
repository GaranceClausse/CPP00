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


class Contact {
public :
	Contact(void);
	~Contact(void);
	std::string	getFirstName(void) const;
	void	setFirstName(std::string s);
	std::string	getLastName(void) const;
	void	setLastName(std::string s);
	std::string	getNickname(void) const;
	void	setNickname(std::string s);
	std::string	getDarkestSecret(void) const;
	void	setDarkestSecret(std::string s);
	int		getPhoneNumber(void) const;
	void	setPhoneNumber(int i);

private :
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_darkestSecret;
	int		_phoneNumber;
};
