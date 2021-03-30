/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:07:14 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/30 16:12:08 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <vector>
# include <algorithm>
# include <iterator>

class span
{

private:

	unsigned int		_len;
	std::vector<int>	_Vec;
	
public:
	span( void );
	
	span( const unsigned int& n );
	span( const span& CObj );
	span& operator=( const span& CObj );
	~span ( void );

	void addNumber(const unsigned int&);
	size_t& shortestSpan( void );
	size_t&	longestSpan( void );

};


#endif