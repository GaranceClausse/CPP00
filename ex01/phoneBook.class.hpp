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
		PhoneBook(void);
		~PhoneBook(void);

		public : 
			Contact	contacts[8];
			
	
			void	print_contact();
			void	print_info();

		private :



};