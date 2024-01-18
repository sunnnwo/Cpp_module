/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:10:19 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/18 15:23:49 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie tmp(name);
	tmp.announce();
}