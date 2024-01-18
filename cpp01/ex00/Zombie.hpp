/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:44:07 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/18 15:20:44 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif