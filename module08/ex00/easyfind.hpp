/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:22:12 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/30 11:57:26 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <string>
# include <algorithm>
# include <vector>
# include <iostream>

template<typename T>
int		easyfind(T vec, int in)
{
	if (find(vec.begin(), vec.end(), in) != vec.end())
		return ( *find(vec.begin(), vec.end(), in ));
	else
		throw std::exception();
}

#endif