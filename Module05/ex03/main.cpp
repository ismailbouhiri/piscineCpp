/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/23 12:41:07 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int     main( void )
{
    int grade = 72;
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    try
    {
        Bureaucrat inst("test1", grade);
        if (rrf)
        {
            rrf->beSigned(inst);
            std::cout << *rrf;
            inst.executeForm(*rrf);//grade is not enough to execute this form;
            delete rrf;
        }
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    Form* rrf1;
    rrf1 = someRandomIntern.makeForm("shrubbery creation", "home");
    try
    {
        Bureaucrat inst2("test2", grade);
        if (rrf1)
        {
            rrf1->beSigned(inst2);
            std::cout << *rrf1;
            inst2.executeForm(*rrf1);//the from will be executed successfully
        }
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    Form* rrf2;
    rrf2 = someRandomIntern.makeForm("unknown", "someone"); // an unknown form 
    try
    {
        Bureaucrat inst2("test3", grade);
        if (rrf2)
        {
            rrf2->beSigned(inst2);
            std::cout << *rrf2;
            inst2.executeForm(*rrf2);
        }
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    delete rrf;
    delete rrf1;
    delete rrf2;
    return ( 0 );
}