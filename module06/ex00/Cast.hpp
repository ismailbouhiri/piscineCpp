/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:05:32 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/25 12:17:39 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP

class Cast
{

private:

	char* _N;

public:

	Cast( void );
	Cast( char *ptr);
	Cast( const Cast& CObj);
	Cast& operator=( const Cast& CObj);
	~Cast ( void );

};



#endif