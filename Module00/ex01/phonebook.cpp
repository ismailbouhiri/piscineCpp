/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 15:32:19 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/20 12:23:07 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp" 

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

std::string     enterInfo(std::string info)
{
    std::string input;

    std::cout << "Enter your " << info << ": ";
    std::getline (std::cin, input);
    std::cout << std::endl;
    
    return input;
}

int             main( void )
{
    std::string input;
    Contacts    allContact[9];
    int         i;
    
    i = 0;
    while (true)
    {
        std::cout << "Enter the command : " << std::endl;
        std::getline (std::cin, input);
        input = ft_upper(input);
        if (input.compare("EXIT") == 0)
            exit(1);
        else if (input.compare("ADD") == 0)
        {
            if (i == 8)
                std::cout << "Your have limit of contacts!!" << std::endl;
            else
            {
                std::cout << i << std::endl;
                Contacts conta;
                std::cout << "adrr = : " << &conta << std::endl;
                std::cout << "-----  Please!, Enter all informations of your contact!!  -----" << std::endl << std::endl; 
                // allContact[i].firstName = enterInfo("first name");
                // allContact[i].lastName = enterInfo("last name");          
                // allContact[i].nickName = enterInfo("nickname");
                // allContact[i].postalAddress = enterInfo("postal address");
                // allContact[i].emailAddress = enterInfo("email address");           
                // allContact[i].phoneNumber = enterInfo("phone number");
                // allContact[i].birthdayDate = enterInfo("birthday date");
                // allContact[i].favoriteMeal = enterInfo("favorite meal");
                // allContact[i].underwearColor = enterInfo("underwear color");
                // allContact[i].darkestSecret = enterInfo("darkest secret");
                // allContact[i].login = enterInfo("login");
                // std::cout << "your last name of index[" << i << "]: " << allContact[i]->lastName << std::endl;
                i++;
            }
            // std::cout << "your last name of index[" << 0 << "]: " << allContact[0]->lastName << std::endl;
        }
        else
            std::cout << "Enter the correct command [ exit || add || search ]!! TRY AGAIN !!!" << std::endl;
    }
    
    return (0);
}