/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/18 16:20:01 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int		main( void )
{
	Bureaucrat a("ismai", 15);
	a.decrementGrade();
	std::cout << a;
	
	return (0);
}
