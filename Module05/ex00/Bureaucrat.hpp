/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:36 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/18 14:36:09 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	
private:

	std::string const	_Name;
	int					_Grade;	

public:
	Bureaucrat( std::string name, int grade );
	~Bureaucrat ( void );
	
	std::string const getName( void ) const;
	int	getGrade( void ) const;

	void	incrementGrade( void );
	void	decrementGrade( void );
		


	
	class GradeTooHighException : virtual public std::exception
	{
		public:
			virtual const char* higher() const throw()
			{
				return( "Your Grade It too higher than normal!! " );
			}
	};
	
	class GradeTooLowException : virtual public std::exception
	{
		public:
			virtual const char* lower() const throw()
			{
				return ( "Your Grade It too lower than normal!! " );
			}
	};
};

std::ostream& operator<<( std::ostream& out, Bureaucrat const& Obj );
#endif
