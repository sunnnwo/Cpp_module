/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:38:32 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2023/12/08 15:18:52 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1 ; i < argc ; i++)
	{
		for (int j = 0; j < (int)strlen(argv[i]) ; j++)
		{
			std::cout << (char)toupper(argv[i][j]);
		}
	}
	std::cout<< std::endl;
	return (0);
}