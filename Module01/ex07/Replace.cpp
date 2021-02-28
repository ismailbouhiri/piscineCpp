/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 15:53:15 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/28 11:24:22 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

int main( int argc, char *argv[] )
{
	std::string content;
	std::string s1;
	std::string s2;
	if (argc == 4)
	{
		std::ifstream	ifs(argv[1]);
		std::ofstream	ofs("myFile.replace");
		s1 = argv[2];
		s2 = argv[3];
		if (!s1.compare("") || !s2.compare(""))
		{
			std::cout << " [ NO EMPTY STRING ] " << std::endl;
		}
		if (!ifs)
		{
			std::cout << " [ FILE ERREUR ] " << std::endl;
			return ( 1 );
		}
		while (std::getline(ifs, content))
		{
			for(int i = content.find(s1); i >= 0; i = content.find(s1))
			{
				content.replace(content.find(s1), s1.length(), s2);
			}
			ofs << content << std::endl;		
		}
		ofs.close();
		ifs.close();
	}
	else {
		std::cout << " [ ENTER THE CORRECT DATA !!  ] " << std::endl;		
		return ( 1 );
	}
	return ( 0 ); 
}