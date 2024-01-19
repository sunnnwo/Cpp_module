/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim <sun-wkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:14:11 by sun-wkim          #+#    #+#             */
/*   Updated: 2024/01/19 10:45:21 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main (void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Print str address : "<< &str << std::endl;
	std::cout << "Print stringPTR address : " << stringPTR << std::endl;
	std::cout << "Print stringREF address : " << &stringREF << std::endl;

	std::cout << std::endl << "print value " << std::endl;
	std::cout << "print str : " << str << std::endl;
	std::cout << "print stringPTR : " << *stringPTR << std::endl;
	std::cout << "print stringREF : " << stringREF << std::endl;
	return (0);
}