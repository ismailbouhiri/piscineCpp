/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:44:28 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/24 14:48:35 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( void )
{
    std::cout << "CREATE A PONY INSTANCE!!" << std::endl;
}

Pony::~Pony( void )
{
    std::cout << "DELETE A PONY INSTANCE!!" << std::endl;
}

void Pony::helloStack( void )
{
    std::cout << "[HELLO FROM STACK !!]" << std::endl;
}
void Pony::helloHeap( void )
{
    std::cout << "[HELLO FROM HEAP !!]" << std::endl;
}
void    ponyOnTheHeap( void )
{
	Pony*	heap = new Pony;
    heap->helloHeap();
	delete heap;
}

void    ponyOnTheStack( void )
{
	Pony	stack;
    stack.helloStack();
}
