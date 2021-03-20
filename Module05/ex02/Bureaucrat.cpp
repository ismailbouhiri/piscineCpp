/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:34 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/19 16:18:15 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(  const std::string name, int grade ) : _Name(name)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else{
		this->_Grade = grade;
	}
}

Bureaucrat::~Bureaucrat( void )
{}

Bureaucrat&		Bureaucrat::operator=( const Bureaucrat& CObj )
{
	this->_Grade = CObj.getGrade();

	return *this;
}

Bureaucrat::Bureaucrat( const Bureaucrat& CObj ) : _Name(CObj.getName())
{
	*this = CObj;
}

const std::string	Bureaucrat::getName( void ) const
{
	return this->_Name;
}

int	Bureaucrat::getGrade( void ) const
{
	return this->_Grade;
}

void	Bureaucrat::incrementGrade( void )
{
	this->_Grade -= 1;
	if ( this->_Grade < 1 )
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade( void )
{
	this->_Grade += 1;
	if ( this->_Grade > 150 )
		throw Bureaucrat::GradeTooLowException();
}
void	Bureaucrat::signForm( Form const& form) const
{
	if (form.getSign())
	{
		std::cout << "< " << this->_Name << " > signs < " << form.getName() << " >" << std::endl;
	}
	else
	{
		std::cout << "< " << this->_Name << " > cannot sign < " << form.getName() << " > because < Bureaucrat's grade lower than form's grade >" << std::endl;
	}
}


std::ostream& operator<<( std::ostream& out, Bureaucrat const& Obj )
{
	out << "< " << Obj.getName() << " >" << ", bureaucrat grade < " << Obj.getGrade() <<" >." << std::endl;
	return out;
}
