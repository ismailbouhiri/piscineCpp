/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:50:45 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/22 10:10:00 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ) : Form::Form("Roboto", 72, 45)
{
	this->_Target = target;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
}

RobotomyRequestForm::RobotomyRequestForm(  const RobotomyRequestForm& CObj ) : Form::Form(CObj)
{
	*this = CObj;
}

std::string RobotomyRequestForm::getTarget( void ) const
{
	return this->_Target;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& CObj )
{
	this->_Target = CObj._Target;
	return *this;
}

void	RobotomyRequestForm::execute( Bureaucrat const& executor ) const
{	
	static int i;
    i++;
	if ( this->getSign() && executor.getGrade() <= this->getExecGrade() )
	{
		if (i % 2)
        {
            std::cout << "DRUUUUM DRUUUM ...!!. < " << this->_Target << " > has been robotomized successfully." << std::endl;    }
        else
            std::cout << "Failed to robotomize " << this->_Target << std::endl;
	}
	else
		throw notExec();
}
