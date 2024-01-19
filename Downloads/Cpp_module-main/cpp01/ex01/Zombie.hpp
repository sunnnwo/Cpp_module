/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:17:08 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/19 00:00:21 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include<iostream>
# include<sstream>

class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setnumber(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
#endif

