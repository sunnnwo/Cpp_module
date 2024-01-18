/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:37:16 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/19 00:01:01 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	std::stringstream ss;

	for(int i = 0 ; i < N ; i++)
	{
		ss.str(std::string()); //std::string 빈 문자열 생성
		ss << i;
		horde[i].setnumber(name + ss.str()); // name + 숫자	
	}
	return (horde);
}