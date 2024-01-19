/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim <sun-wkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:29:29 by sun-wkim          #+#    #+#             */
/*   Updated: 2024/01/19 11:29:29 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main() 
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club"); bob.attack();
	} 
	{
		Weapon club = Weapon("crude spiked club");

		
	}
return 0; 
}