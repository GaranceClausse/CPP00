/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:58:59 by gclausse          #+#    #+#             */
/*   Updated: 2022/06/11 11:58:59 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				char ch = toupper(argv[i][j]);
				
 				std::cout << ch;
				j++;
			}
			i++;
		}
		std::cout<< "" << std::endl;
	}
	return (0);
}