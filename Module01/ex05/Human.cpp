/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:08:58 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/26 18:33:32 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

Human::Human( void )
{
	std::cout << "[ CREATE THE HUMAN INSTANCE ]" << std::endl;
}

Human::~Human( void )
{
	std::cout << "[ DESTROY THE HUMAN INSTANCE ]" << std::endl;
}

std::string		Human::identify( void ) const
{
	return this->_brain.identify();
}

const Brain&	Human::getBrain( void ) const
{
	return this->_brain;
}