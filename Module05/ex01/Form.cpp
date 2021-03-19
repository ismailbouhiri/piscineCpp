/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:23:28 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/19 12:18:38 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form( std::string name, const int singGrade, const int execGrade ) : _Name(name),
_Sign(false), _SingGrade(singGrade), _ExecGrade(execGrade)
{
	if (_SingGrade > 150 || _ExecGrade > 150)
	{
		throw Form::GradeTooLowException();
	}
	else if (_SingGrade  < 1 || _ExecGrade < 1)
	{
		throw Form::GradeTooHighException();
	}
}

Form::~Form( void )
{}

const	std::string	Form::getName(void) const
{
	return this->_Name;
}

bool				Form::getSign(void) const
{
	return this->_Sign;
}

const int			Form::getExecGrade(void) const
{
	return this->_ExecGrade;
}

const	int			Form::getSignGrade(void) const
{
	return this->_SingGrade;
}

void				Form::beSigned(Bureaucrat const& bur)
{
	if (this->_SingGrade >= bur.getGrade())
		this->_Sign = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&		operator<<( std::ostream& out, Form const& Obj )
{
	out << "< " << Obj.getName() << " >" << ", form grades ExecGrade < " << Obj.getExecGrade() << " > SingGrade <" << Obj.getSignGrade() << std::endl;
	return out;
}