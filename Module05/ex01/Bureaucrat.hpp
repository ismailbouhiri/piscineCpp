/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:36 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/19 15:24:44 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include "Form.hpp"

class Form;

class Bureaucrat
{
	
private:

	const std::string	_Name;
	int					_Grade;	

public:
	Bureaucrat( const std::string name, int grade );
	~Bureaucrat ( void );
	
	const std::string getName( void ) const;
	int	getGrade( void ) const;

	void	incrementGrade( void );
	void	decrementGrade( void );
	void	signForm( Form const& form) const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return( "Your Grade It too higher than normal!! " );
			}
	};
	
	class GradeTooLowException : public std::exception
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
