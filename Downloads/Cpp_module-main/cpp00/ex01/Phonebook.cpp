/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:06:35 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/16 01:16:11 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::addbook()
{
	if (index == 8)
	{	
		index--;
		book[index++].p_add();	
	}
	else if (index != 8)
	{
		book[index].p_add();
		index++;
	}
}

void Phonebook::searchbook()
{
	int c;

	c = 0;
	std::cout<<"Insert index number : ";
	std::cin>>c;
	std::cout<<std::endl;
	if (c > index)
	{
		std::cout<<"Wrong Index"<<std::endl;
	}
	else if (c == 0)
		std::cout<<"Empty"<<std::endl;
	else
	{
		for (int i = 0; i < index ; i++)
		{
			if (c == i + 1)
			{
				book[i].showPbook(i);
			}
		}
	}
}

void Phonebook::samplebook()
{
	std::cout<<"|"<<std::setw(10)<<"INDEX";
	std::cout<<"|"<<std::setw(10)<<"First Name";
	std::cout<<"|"<<std::setw(10)<<"Last Name";
	std::cout<<"|"<<std::setw(10)<<"Nick Name"<<"|"<<std::endl;
	for (int i = 0 ; i < index ; i++)
	{
		std::cout<<"|"<<std::setw(10)<< i + 1;
		std::cout<<"|"<<std::setw(10)<<book[i].LengthCheck(book[i].Get_Fname());
		std::cout<<"|"<<std::setw(10)<<book[i].LengthCheck(book[i].Get_Lname());
		std::cout<<"|"<<std::setw(10)<<book[i].LengthCheck(book[i].Get_Nname())<<"|"<<std::endl;
	}
}

void Phonebook::initIndex()
{
	index = 0;
} 