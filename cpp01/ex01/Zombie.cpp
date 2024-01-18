/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:23:45 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/19 00:00:50 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string name)
{
	this -> name = name;
}

Zombie::~Zombie(void)
{
	std::cout<<this -> name << " is dead (destroy)" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this -> name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setnumber(std::string name)
{
	this->name = name;
}