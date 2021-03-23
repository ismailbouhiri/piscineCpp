/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:50:48 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/22 09:58:29 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{

private:

	std::string _Target;

public:

	RobotomyRequestForm(  void  );
	RobotomyRequestForm(  const std::string& target );
	RobotomyRequestForm(  const RobotomyRequestForm& CObj );
	RobotomyRequestForm& operator=(  const RobotomyRequestForm& CObj );
	virtual ~RobotomyRequestForm ( void );
	
	virtual void 	execute(Bureaucrat const & executor) const;
	std::string 	getTarget( void ) const ;

};

#endif