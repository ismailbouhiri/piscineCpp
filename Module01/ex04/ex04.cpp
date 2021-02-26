/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 11:08:00 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/26 11:14:47 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void )
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string *pointer = &str;
	std::string& reference = str;
	
	std::cout << " ---- DISPLAY THE STRING WITH POINTER ---- " << std::endl;
	std::cout << "[ "<< *pointer  << " ]" << std::endl;
	std::cout << " ---- DISPLAY THE STRING WITH REFERENCE ---- " << std::endl;
	std::cout << "[ "<< reference  << " ]" << std::endl;
	return (0);
}