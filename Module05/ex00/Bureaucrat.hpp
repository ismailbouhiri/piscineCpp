/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:36 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/19 10:27:42 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	
private:

	const std::string 		_Name;
	int					_Grade;	

public:
	Bureaucrat( std::string name, int grade );
	~Bureaucrat ( void );
	
	const std::string	getName( void ) const;
	int	getGrade( void ) const;

	void	incrementGrade( void );
	void	decrementGrade( void );
		


	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return( "Your Grade It too higher than normal!! " );
			}
	};
	
	class GradeTooLowException : virtual public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ( "Your Grade It too lower than normal!! " );
			}
	};
};

std::ostream& operator<<( std::ostream& out, Bureaucrat const& Obj );
#endif
