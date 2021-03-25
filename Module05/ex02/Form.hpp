/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:23:32 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/24 11:38:22 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <string>
# include <iostream>
# include <fstream>

# include "Bureaucrat.hpp"

class  Bureaucrat;

class Form
{

private:


	const	std::string	_Name;
	const int			_SingGrade;
	const int			_ExecGrade;
	bool				_Sign;

public:

	Form( void );
	Form( const std::string name, int singGrade, int execGrade );
	Form( const Form& CObj );
	Form&	 operator=( const Form& CObj );

	virtual ~Form ( void );
	
	void beSigned( Bureaucrat const& bur );
	
	const	std::string	getName(void) const;
	bool				getSign(void) const;
	const int&			getExecGrade(void) const;
	const int&			getSignGrade(void) const;

	virtual void execute(Bureaucrat const & executor) const = 0;
	
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};
	class notExec : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<( std::ostream& out, Form const& Obj );

#endif