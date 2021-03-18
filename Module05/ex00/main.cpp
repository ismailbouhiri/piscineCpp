/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/18 18:30:40 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int		main( void )
{
	// LOWER ERREUR  !! 
	try
	{
		Bureaucrat a("test", 1560);
		a.decrementGrade();
		std::cout << a;
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
	// HIGHER ERREUR  !! 
	try
	{
		Bureaucrat a("test", -150);
		a.decrementGrade();
		std::cout << a;
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
	// NO EXCEPTIONS !!
	try
	{
		Bureaucrat a("test", 5);
		a.decrementGrade();
		std::cout << a;
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
