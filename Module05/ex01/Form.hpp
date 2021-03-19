/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:23:32 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/19 15:31:02 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class  Bureaucrat;

class Form
{

private:

	const	std::string	_Name;
	const int			_SingGrade;
	const int			_ExecGrade;
	bool		_Sign;

public:

	Form( const std::string name, int singGrade, int execGrade );
	~Form ( void );
	
	void beSigned(Bureaucrat const& bur);
	
	const	std::string	getName(void) const;
	bool		getSign(void) const;
	const int&			getExecGrade(void) const;
	const int&			getSignGrade(void) const;


	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return( "Your Grade It too higher than normal - [ Form Class ]!!" );
			}
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ( "Your Grade It too lower than normal [ Form Class ]!! " );
			}
	};
};

std::ostream& operator<<( std::ostream& out, Form const& Obj );

#endif