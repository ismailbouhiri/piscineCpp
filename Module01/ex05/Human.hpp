/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:09:00 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/06 14:46:31 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

# include "Brain.hpp"

class Human
{

private:

	const Brain _brain;

public:

	Human( void );
	~Human( void );
	
	const Brain&	getBrain( void ) const;
	std::string		identify( void ) const;

};


#endif