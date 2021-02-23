/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 15:32:19 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/23 15:10:34 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

Contacts    allContact[8];
int         acc = 0;

std::string     ft_upper(std::string input)
{
    std::string upper;
    
    for (int i = 0; input[i]; i++)
    {
        upper += (char) toupper((unsigned char)input[i]);
    }
    upper[input.length()] = '\0';
    return upper;
}

int             main( void )
{
    std::string input;
    int         num;

    while (true)
    {
        std::cout << "Enter the command : " << std::endl;
        std::getline (std::cin, input);
        input = ft_upper(input);
        if (!input.compare("EXIT"))
            exit(1);
        else if (!input.compare("ADD"))
        {
            if (acc == 8)
                std::cout << "Your have limit of contacts!!" << std::endl;
            else
            {
                allContact[acc].getAllInfo();
                acc++;
            }
        }
        else if (!input.compare("SEARCH"))
        {
            std::cout << "     index"<< "|" << "first name" << "|" << " last name" << "|" <<"  nickname" << "|"<<  std::endl;
            for (int k = 0; k < 8; k++)
                allContact[k].beforeIndex(k);
            std::cout << "Enter index of the contact for display the all informations: ";
            std::getline (std::cin, input);
            if (input[0] > '0' && input[0] < '9' && input[1] == '\0') {
                num = std::stoi(input);
                if (num <= acc) {
                    allContact[num - 1].afterIndex();
                }
                else {
                    std::cout << "No contact in this index!!" << std::endl; 
                }
            }
            else {
                std::cout << "No contact in this index!!" << std::endl; 
            }
        }
        else
            std::cout << "ENTER THE CORRECT COMMAND [ EXIT || ADD || SEARCH ]!! TRY AGAIN !!!" << std::endl;
    }
    return (0);
}