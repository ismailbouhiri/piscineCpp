/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 17:00:52 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/25 14:12:34 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

void	castToChar(std::string n)
{
	int number;
	try
	{
		number = std::stoi(n);
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
	int number;
	try
	{
		number = std::stoi(n);
		std::cout << number << std::endl;
	}
	catch ( const std::exception& e )
	{
		std::cerr << "impossible" << std::endl;
	}
}
	
void	castToFloat(std::string n)
{
	float number;
	try
	{
		number = std::stof(n);
		if (number != static_cast<int>(number))
			std::cout << number << "f" << std::endl;
		else
			std::cout << number << ".0f" << std::endl;
	}
	catch ( const std::exception& e )
	{
		std::cerr << "impossible" << std::endl;
	}
}

void	castToDouble(std::string n)
{
	double number;
	try
	{
		number = std::stod(n);
		if (number != static_cast<int>(number))
			std::cout << number << std::endl;
		else
			std::cout << number << ".0" << std::endl;
	}
	catch ( const std::exception& e )
	{
		std::cerr << "impossible" << std::endl;
	}
}


int		main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cout << " [ ******** || The Programme accepte 2 arguement || ********* ] !! " << std::endl;
		std::cout << " [ *** { NameOfProgram } && { SECOND ARG BY YOUR CHOICE } *** ] !! " << std::endl;
		return ( -1 );
	}
	else
	{
		std::string cast = static_cast< std::string >(argv[1]);
		std::cout << "char : ";
		castToChar(cast);
		std::cout << "int : ";
		castToInt (cast);
		std::cout << "float : ";
		castToFloat(cast);
		std::cout << "Double : ";
		castToDouble(cast);
	}
	return ( 0 );
}