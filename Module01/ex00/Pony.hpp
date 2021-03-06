/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:34 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/06 14:46:00 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
# include <iostream>

class Pony {

private:

public:

	void helloStack( void );
	void helloHeap( void );
	Pony( void );
	~Pony( void );
};

void ponyOnTheHeap( void );
void ponyOnTheStack( void );

#endif