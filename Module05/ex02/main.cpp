/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:44:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/19 15:54:35 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main( void )
{
    int ExecGrade = 10;
    int signGrade = 50;

    try
    {
        Form frm("frm", signGrade, ExecGrade);
        Bureaucrat inst("inst", ExecGrade);
        std::cout << inst << frm;
        frm.beSigned(inst);
        inst.signForm(frm);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "//----------------------------------------------------------//" << std::endl;

    ExecGrade = 100;
    signGrade = 3;
    Form frm1("frm1", signGrade, ExecGrade);

    try 
    {
        Bureaucrat inst2("inst2", ExecGrade);
        std::cout << inst2 << frm1;
        frm1.beSigned(inst2);
        inst2.signForm(frm1);
        std::cout << frm1;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
