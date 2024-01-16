/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:23:32 by sun-wkim@st       #+#    #+#             */
/*   Updated: 2024/01/16 01:15:37 by sun-wkim@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string p_num;
		std::string d_secret;
	public:
		void 		p_add();
		void 		showPbook(int c);
		std::string Get_Fname();
		std::string Get_Lname();
		std::string Get_Nname();
		std::string	LengthCheck(std::string str);
};


#endif