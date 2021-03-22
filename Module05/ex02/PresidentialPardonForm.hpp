/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:50:43 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/22 10:02:54 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{

private:

	std::string _Target;

public:

	PresidentialPardonForm( const std::string& target );
	PresidentialPardonForm( void );
	PresidentialPardonForm( const PresidentialPardonForm& CObj );
	PresidentialPardonForm& operator=( const PresidentialPardonForm& CObj );
	
	virtual ~PresidentialPardonForm ( void );
	
	std::string	 getTarget( void ) const;
	virtual	void execute(Bureaucrat const & executor) const;

};

#endif