/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:46:48 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/05 10:43:46 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int argc , char **arg)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int y = 1; arg[y]; y++)
		{
			for (int i = 0; arg[y][i]; i++)
			{
				std::cout << (char)toupper(arg[y][i]);
			}
			if (arg[y + 1])
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return (0);
}