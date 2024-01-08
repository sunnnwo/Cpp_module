/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim <sun-wkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:12:35 by sun-wkim          #+#    #+#             */
/*   Updated: 2024/01/08 11:01:49 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int	j;
	int i;
	std::string str;

	i = 0;
	j = 1;
	if (argc < 2)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[j] != '\0')
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
				str = argv[j][i] - 32;
			else
				str = argv[j][i];
			std::cout<< str;
			i++;
		}
		j++;
	}
	std::cout<<std::endl;
	return (0);
}