/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:43:50 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/18 23:12:35 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie stack("stack1");
	Zombie *heap = newZombie("heap"); //동적할당

	randomChump("stack2");// 일반 함수로 호출
	stack.announce();
	heap->announce();
	delete heap;
	return (0);
}