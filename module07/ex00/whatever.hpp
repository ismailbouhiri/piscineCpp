/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:34:59 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/04/03 11:18:53 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void swap( T& a,  T& b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>
const T& min(const T& a, const T& b)
{
	return ( (a <= b ) ? a : b );
}

template <typename T>
const T& max(const T& a, const T& b)
{
	return ( (a >= b ) ? a : b );
}

#endif

