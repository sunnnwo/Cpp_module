/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:14:53 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/19 00:01:53 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie *horde;
	int		j;

	j = 0;
	horde = zombieHorde(j, "TestZombie");
	for (int i = 0 ; i < j ; i++)
	{
		horde[i].announce();
	}
	delete []horde;
	return (0);
}