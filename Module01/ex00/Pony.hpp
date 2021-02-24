/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:34 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/24 14:42:25 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H
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