/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 01:54:39 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/16 00:31:29 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	Phonebook books;
	std::string cmd;

	books.initIndex();
	std::cout<<"Phone Book!"<<std::endl;
	while (true)
	{
		std::cout<<"Insert Commend : (ADD) (SEARCH) (EXIT)"<<std::endl;
		std::cin>>cmd;	
		if (cmd == "ADD")
		{
			books.addbook();
		}
		else if (cmd == "SEARCH")
		{
			books.samplebook();
			books.searchbook();
		}
		else if (cmd == "EXIT")
		{
			std::cout<<"GOOD BYE";
			return (0);
		}
		else
			std::cout<<"Wrong Commend"<<std::endl;

	}
	
	
}