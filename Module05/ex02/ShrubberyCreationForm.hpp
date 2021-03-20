/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:50:54 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 11:13:52 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

private:

	ShrubberyCreationForm( void ){};
	std::string _Target;
	
public:

	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm& CObj );
	~ShrubberyCreationForm ( void );

	ShrubberyCreationForm& operator=( const ShrubberyCreationForm& CObj);

	std::string getTarget( void );
};



#endif