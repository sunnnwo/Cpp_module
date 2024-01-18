/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:07:18 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/18 23:09:34 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this -> name = name;
	std::cout<<this->name<<" Moving zombie" <<std::endl;
}

Zombie::~Zombie()
{
	std::cout<< this -> name << " is Dead(~Zombie)" << std::endl;
}

void Zombie::announce(void)
{
	std::cout<<this -> name << " BraiiiiiiinnnzzzZ..." << std::endl;
}