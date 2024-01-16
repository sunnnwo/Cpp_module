/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:54:39 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/16 01:13:27 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::p_add()
{
	std::cout<<"Input Phone BooK"<<std::endl;
	std::cout<<"Input First Name : ";
	std::cin>>f_name;
	std::cout<<std::endl;
	std::cout<<"Input Last Name : ";
	std::cin>>l_name;
	std::cout<<std::endl;
	std::cout<<"Input Nick Name : ";
	std::cin>>n_name;
	std::cout<<std::endl;
	std::cout<<"Input Phone_number : ";
	std::cin>>p_num;
	std::cout<<std::endl;
	std::cout<<"Input darkest secret : ";
	std::cin>>d_secret;
	std::cout<<std::endl;
}

void Contact::showPbook(int c)
{
	std::cout<<"Index          : "<< c + 1 << std::endl;
	std::cout<<"First Name     : " <<f_name << std::endl;
	std::cout<<"Last Name      : " <<l_name<< std::endl;
	std::cout<<"Nick Name      : " <<n_name<< std::endl;
	std::cout<<"Phone Number   : " <<p_num<< std::endl;
	std::cout<<"Darkest secret : " <<d_secret<<std::endl;
}

std::string	Contact::LengthCheck(std::string str)
{
	if (str.length() >= 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	return (str);
}


std::string Contact::Get_Fname()
{
	return (f_name);
}

std::string Contact::Get_Lname()
{
	return (l_name);
}

std::string Contact::Get_Nname()
{
	return (n_name);
}