/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:42:09 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/25 18:58:55 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string s1;
	int Number;
	std::string s2;
};

void	printData(Data *data, std::string mode)
{
	std::cout << "|||| => " << mode << " <=|||||||| " << std::endl;
	std::cout << "|||| => S1 : [ " << data->s1 << " ]." << std::endl;
	std::cout << "|||| => NUM : [ " << data->Number << " ]." << std::endl;
	std::cout << "|||| => S2 : [ " << data->s2 << " ]." << std::endl;
}

Data *dataRandom( void )
{
	std::string randomStrings[5] = {"Me", "Hello", "World", "serialize", "deserialize"};
	Data *_data = new Data;
	int n;
	
	n = rand() % 5;
	_data->s1 = randomStrings[n];
	_data->Number = rand();
	n += (n != 0) ? -1 : 1;
	_data->s2 = randomStrings[n];
	return ( _data );
}

void    *serialize(void)
{
    std::string *data = new std::string[52];
	Data *_Da = dataRandom();

    *data = _Da->s1;
    *(reinterpret_cast<int *>(&data[24])) = _Da->Number;
    *(reinterpret_cast<std::string *>(&data[28])) = _Da->s2;
	
	printData(_Da, " -- serialize  -- ");
	
	delete _Da;
    return ( reinterpret_cast<void*>(data) );
}

Data    *deserialize(void *raw)
{
    Data    *data;
    data = new Data();

    data->s1 = *reinterpret_cast<std::string *>(raw);
    data->Number = *reinterpret_cast<int *>(&reinterpret_cast<std::string *>(raw)[24]);
    data->s2 = reinterpret_cast<std::string *>(raw)[28];
    return (data);
}

int		main( void )
{
	void *_Raw;
	Data *_Data;

	srand(time(nullptr));
	_Raw = serialize();
	_Data = deserialize(_Raw);
	printData(_Data, " -- deserialize -- ");

	delete _Data;
	delete [] reinterpret_cast<std::string *>(_Raw);
	return ( 0 );
}
