/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:50:40 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/22 10:09:47 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ) : Form::Form("Presidential", 25, 5)
{
	this->_Target = target;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& CObj ) : Form::Form(CObj)
{
	*this = CObj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& CObj )
{
	this->_Target = CObj.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget( void ) const
{
	return this->_Target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if ( executor.getGrade() <= this->getExecGrade()  && this->getSign() )
        std::cout << "< " << this->_Target << " > has been pardoned by Zafod Beeblebrox." << std::endl;
    else
		throw notExec();
}

