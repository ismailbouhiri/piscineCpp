/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:34 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/19 16:20:12 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _Name(name)
{
	if (grade > 150)
	{
		throw GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw GradeTooHighException();
	}
	else{
		this->_Grade = grade;
	}
}

Bureaucrat::~Bureaucrat( void )
{}

Bureaucrat::Bureaucrat( const Bureaucrat& CObj ) : _Name(CObj.getName())
{
	*this = CObj;
}

Bureaucrat&		Bureaucrat::operator=( const Bureaucrat& CObj )
{
	this->_Grade = CObj.getGrade();

	return *this;
}

const std::string  Bureaucrat::getName( void ) const
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
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade( void )
{
	this->_Grade += 1;
	if ( this->_Grade > 150 )
		throw GradeTooLowException();
}

std::ostream& operator<<( std::ostream& out, Bureaucrat const& Obj )
{
	out << "< " << Obj.getName() << " >" << ", bureaucrat grade < " << Obj.getGrade() <<" >." << std::endl;
	return out;
}
