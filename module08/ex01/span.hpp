/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:07:14 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/31 11:33:04 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <vector>
# include <algorithm>
# include <iterator>
# include <iostream>

class Span
{

private:

	unsigned int		_len;
	std::vector<int>	_Vec;
	
public:
	Span( void );
	
	Span( const unsigned int& n );
	Span( const Span& CObj );
	Span& operator=( const Span& CObj );
	~Span ( void );

	void addNumber(const unsigned int&);
	void addNumber(const std::vector<int>::iterator&, const std::vector<int>::iterator&);
	int	shortestSpan( void );
	int	longestSpan( void );

};

#endif