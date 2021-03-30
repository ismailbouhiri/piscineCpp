/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:22:14 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/30 12:06:29 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int		main( void )
{
    std::vector<int> vect;
    for ( int x = 0; x < 10; x++ ) {
        vect.push_back(x);
	}

	try
    {
        int val = easyfind(vect, 9);
        std::cout << val << std::endl;
        
		val = easyfind(vect, 1);
        std::cout << val << std::endl;
		
        val = easyfind(vect, 90);
        std::cout << val << std::endl;
    }
    catch( const std::exception& e )
    {
        std::cerr << e.what() << std::endl;
    }

	return ( 0 );
}