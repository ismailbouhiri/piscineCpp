/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 17:00:52 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/25 13:14:37 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

void	castToChar(std::string n)
{
	int number;
	try
	{
		number = stoi(n);
		if (isprint(number))
			std::cout << "'" << static_cast<char>(number) << "'"<< std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch ( const std::exception& e )
	{
		std::cerr << "impossible" << std::endl;
	}
}

void	castToInt(std::string n)
{
	n = nullptr;
}
	
void	castToFloat(std::string n)
{
	n = nullptr;	
}

void	castToDouble(std::string n)
{
	n = nullptr;
}


int		main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cout << "The Programme accepte 2 arguement !! [ NameOfProgram && { SECOND ARG BY YOUR CHOICE} ] !! " << std::endl;
		return ( -1 );
	}
	else
	{
		std::string cast = static_cast< std::string >(argv[1]);
		std::cout << "char : ";
		castToChar(cast);
		// std::cout << "int : ";
		// castToInt (cast);
		// std::cout << "float : ";
		// castToFloat(cast);
		// std::cout << "Double : ";
		// castToDouble(cast);
	}
	return ( 0 );
}