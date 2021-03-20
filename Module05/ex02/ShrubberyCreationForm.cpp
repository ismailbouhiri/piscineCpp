/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:50:51 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 11:09:54 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : _Target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& CObj ) : Form::Form(CObj)
{
	*this = CObj;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& CObj )
{
	this->_Target = CObj._Target;
	
	return *this;
}

std::string				ShrubberyCreationForm::getTarget( void )
{
	return this->_Target;
}

