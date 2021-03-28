/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:35:02 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/28 18:38:28 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <string>
# include <iostream>

template <typename U>
void	iter( const U *array, const int& len, void (*f)(U const& ))
{
	for (int i = 0; i < len; i++)
	{
		f(array[i]);
	}
}

#endif

