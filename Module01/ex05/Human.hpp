/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:09:00 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/26 18:33:25 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

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