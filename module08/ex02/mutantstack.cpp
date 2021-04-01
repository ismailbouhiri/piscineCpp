/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:35:12 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/04/01 09:36:42 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack( void )
{}

template<typename T>
MutantStack<T>::~MutantStack( void )
{}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin( void )
{
    return this->c.begin();
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end( void )
{
    return this->c.end();
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rbegin( void )
{
    return this->c.rbegin();
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rend( void )
{
    return this->c.rend();
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &CObj)
{
    *this = CObj;
}

template<typename T>
void	MutantStack<T>::operator=( const MutantStack& CObj )
{
    this->c = CObj.c;
}
