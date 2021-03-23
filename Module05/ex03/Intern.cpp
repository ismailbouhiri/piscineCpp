/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:26:31 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/23 11:51:45 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"


Intern::Intern( void )
{}

Intern::~Intern( void )
{}

Intern::Intern( const Intern& CObj )
{
	*this = CObj;
}

Intern& Intern::operator=(const Intern& CObj)
{
	(void) CObj;
	return *this;
}

Form* Intern::makeForm( const std::string& nameForm, const std::string& target )
{
	Form *forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    for(int i = 0 ; i < 3; i++)
    {
        if (!(nameForm.compare(forms[i]->getName())))
        {
            for(int j = 0 ; j < 3; j++)
                if (j != i)
                    delete forms[j];
            std::cout << "Intern creates " << forms[i]->getName() << std::endl;
            return forms[i];
        }
    }
    std::cout << "The requested Form is not known!!" << std::endl;
    return NULL;
}
