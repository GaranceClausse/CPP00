/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:31:56 by gclausse          #+#    #+#             */
/*   Updated: 2022/06/12 12:31:56 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "contact.class.hpp"

class PhoneBook {

	public :
		PhoneBook(void) : _nb_contact(0), _max_contact(0) {};
		~PhoneBook(void);
		Contact	get_contact(int index) const;
		void	print_phoneBook() const;
		void	search_contact() const;
		void 	add_contact();

		private :
			Contact	_contacts[8];
			int		_nb_contact;
			int		_max_contact;

};