/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:23:20 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/16 00:03:43 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONENOOK_HPP
# define PHONENOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact book[8];
		int		index;

	public:
		void addbook();
		void searchbook();
		void initIndex();
		void samplebook();
};


#endif