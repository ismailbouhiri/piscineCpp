/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:50:51 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/22 10:02:37 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : Form::Form("Shrubbery", 145, 137)
{
	this->_Target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& CObj ) : Form::Form(CObj)
{
	*this = CObj;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& CObj )
{
	this->_Target = CObj._Target;
	
	return *this;
}

std::string				ShrubberyCreationForm::getTarget( void ) const
{
	return this->_Target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if ( executor.getGrade() <= this->getExecGrade() && this->getSign() )
	{
		std::string fileName = "<" + this->_Target + ">" + "_shrubbery";
		std::ofstream	ofs(fileName);
		ofs << " 	      \'.,                " << std::endl;
		ofs << "         \'b      *         " << std::endl;
		ofs << "          \'$    #.         " << std::endl;
		ofs << "           $:   #:         " << std::endl;
		ofs << "           *#  @):         " << std::endl;
		ofs << "           :@,@):   ,.**:\' " << std::endl;
		ofs << " ,         :@@*: ..**\'     " << std::endl;
		ofs << "  \'#o.    .:(@\'.@*\"\'       " << std::endl;
		ofs << "     \'bq,..:,@@*\'   ,*     " << std::endl;
		ofs << "     ,p$q8,:@)\'  .p*\'      " << std::endl;
		ofs << "    \'    \'@@Pp@@*\'         " << std::endl;
		ofs << "          Y7\'.\'            " << std::endl;
		ofs << "         :@):.             " << std::endl;
		ofs << "        .:@:\'.             " << std::endl;
		ofs << "      .::(@:.              " << std::endl;
		ofs.close();
	}
	else
		throw notExec();
}

