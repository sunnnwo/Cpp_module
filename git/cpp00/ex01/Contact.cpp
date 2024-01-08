/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim <sun-wkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:25:38 by sun-wkim          #+#    #+#             */
/*   Updated: 2024/01/08 15:09:07 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	Contact::Insert()
{
	std::cout<<"Insert One Field"<<std::endl;
	std::cout<<"Insert First_name"<<std::endl;
	std::getline(std::cin, f_name);
	std::cout<<"Insert Last_name"<<std::endl;
	std::getline(std::cin, l_name);
	std::cout<<"Insert N_name"<<std::endl;
	std::getline(std::cin, n_name);
	std::cout<<"Insert phone number"<<std::endl;
	std::getline(std::cin, p_number);
	std::cout<<"Insert Secret"<<std::endl;
	std::getline(std::cin, secret);

	if (std::cin.eof())
		return (1);
	if (checkEmpty(f_name) || checkEmpty(l_name) || checkEmpty(n_name)
			||checkEmpty(p_number) || checkEmpty(secret))
	{
		std::cout<<"have a empty in the line"<<std::endl;
		return (1);
	}
	return (0);
}