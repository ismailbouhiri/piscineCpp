/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:36 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/21 14:55:27 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{

private:

	Bureaucrat( void );
	const std::string	_Name;
	int					_Grade;	

public:

	Bureaucrat( const std::string name, int grade );
	~Bureaucrat ( void );
	Bureaucrat( const Bureaucrat& CObj );
	Bureaucrat&		operator=( const Bureaucrat& CObj );

	const std::string	getName( void ) const;
	int	getGrade( void ) const;
	void	incrementGrade( void );
	void	decrementGrade( void );

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<( std::ostream& out, Bureaucrat const& Obj );

#endif
