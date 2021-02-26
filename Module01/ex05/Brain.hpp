/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:08:55 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/26 17:59:18 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

# include <iostream>
#include <sstream>
#include <string>

class Brain
{
private:
	
public:
	Brain( void );
	~Brain( void );

	std::string identify( void ) const;
};

#endif