/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:34 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/18 14:31:15 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : _Name(name)
{
	try
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
	catch( Bureaucrat::GradeTooLowException& e )
	{
		std::cout << e.lower() << std::endl;
	}
	catch( Bureaucrat::GradeTooHighException& e )
	{
		std::cout << e.higher() << std::endl;
	}
	catch ( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat( void )
{}

std::string const Bureaucrat::getName( void ) const
{
	return this->_Name;
}

int	Bureaucrat::getGrade( void ) const
{
	return this->_Grade;
}

void	Bureaucrat::incrementGrade( void )
{
	try
	{
		this->_Grade -= 1;
		if ( this->_Grade < 1 )
			throw GradeTooHighException();
	}
	catch ( Bureaucrat::GradeTooHighException& e )
	{
		std::cerr << e.higher() << std::endl;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade( void )
{
	try
	{
		this->_Grade += 1;
		if ( this->_Grade > 150 )
			throw GradeTooLowException();
	}
	catch( Bureaucrat::GradeTooLowException& e )
	{
		std::cerr << e.lower() << std::endl;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}	
}

std::ostream& operator<<( std::ostream& out, Bureaucrat const& Obj )
{
	out << "< " << Obj.getName() << " >" << ", bureaucrat grade < " << Obj.getGrade() <<" >." << std::endl;
	return out;
}
