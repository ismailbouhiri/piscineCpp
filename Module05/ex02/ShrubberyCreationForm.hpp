/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:50:54 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/22 10:02:40 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

private:

	std::string _Target;
	
public:

	ShrubberyCreationForm( const std::string& target );
	ShrubberyCreationForm( const ShrubberyCreationForm& CObj );
	 virtual ~ShrubberyCreationForm ( void );

	ShrubberyCreationForm& operator=( const ShrubberyCreationForm& CObj);
	virtual void 			execute(Bureaucrat const & executor) const;
	std::string 			getTarget( void ) const;
	
};



#endif