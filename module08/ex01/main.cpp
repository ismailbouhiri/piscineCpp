/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:07:09 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/31 11:33:35 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

int main()
{
    std::cout << "=========|| Example1 ||=======" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "=========|| Example2 ||=======" << std::endl;
    try
    {
		Span sp1 = Span(100);
		std::vector<int> vect; 

		for(int i = 1; i <= 100; i++)
			vect.push_back(i);

		sp1.addNumber( vect.begin(), vect.end());
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
		Span sp2 = sp1;
        sp2.addNumber(150);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}