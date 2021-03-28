/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:35:04 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/28 18:41:57 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

template<typename T>
void print(const T& arg)
{
    std::cout<< "the number is " << arg << std::endl;
}

int		main( void )
{
    int iarr[3] = {150, 16, 70};
    float farr[5] = {60.0f, 50.8f, 150.16f, 2.0f, 100.1f};

    iter(iarr, 3, print);
    iter(farr, 5, print);
}
