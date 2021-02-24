/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:02:34 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/24 14:41:29 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak( void )
{
    std::string* panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
}