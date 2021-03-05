/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classContacts.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:06:55 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/05 10:36:12 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contacts::Contacts( void ) {
	return ;
}

Contacts::~Contacts( void ){
	return ;
}

void		Contacts::getAllInfo( void )
{
	std::cout << "-----> Please!! Enter all informations <-----" << std::endl;
	this->setFirstName();
	this->setLastName();
	this->setNickName();
	this->setLogin();
	this->setPostalAddress();
	this->setEmailAddress();
	this->setPhoneNumber();
	this->setBirthdayDate();
	this->setFavoriteMeal();
	this->setUnderwearColor();
	this->setDarkestSecret();
}

void		Contacts::afterIndex( void )
{
	std::cout <<"your first name : " << this->getFirstName() << std::endl;
	std::cout <<"your last name : " << this->getLastName() << std::endl;
	std::cout <<"your nickname : " << this->getNickName() << std::endl;
	std::cout <<"your login : " << this->getLogin() << std::endl;
	std::cout <<"your postal address : " << this->getPostalAddress() << std::endl;
	std::cout <<"your email address : " << this->getEmailAddress() << std::endl;
	std::cout <<"your phone number : " << this->getPhoneNumber() << std::endl;
	std::cout <<"your birthday date : " << this->getBirthdayDate() << std::endl;
	std::cout <<"your favorite meal : " << this->getFavoriteMeal() << std::endl;
	std::cout <<"your underwear color : " << this->getUnderwearColor() << std::endl;
	std::cout <<"your darkest secret : " << this->getDarkestSecret() << std::endl;
}

void		Contacts::beforeIndex( int x )
{
	std::cout << "         " << (x + 1) << "|" << this->lenHandle(this->_firstName) << "|";
	std::cout << this->lenHandle(this->_lastName) << "|" << this->lenHandle(this->_nickName) << "|";
	std::cout << std::endl;
}

std::string Contacts::lenHandle(std::string str)
{
	std::string ptr;
	int len;

	len = str.length() - 10;
	if (len < 0){
		len *= -1;
		for (int spaces = 0; spaces < len; spaces++)
			ptr += " ";
		ptr += str;
	}
	else if (len > 0){
		for (int car = 0; car < 9; car++)
			ptr += str[car];
		ptr += ".";
	}
	else{
		return (str);
	}
	return (ptr); 
}

// ---------------------- GETTERS -----------------------//

std::string Contacts::getFirstName( void )
{
	return this->_firstName;
}

std::string Contacts::getLastName( void )
{
	return this->_lastName;
}

std::string Contacts::getNickName( void )
{
	return this->_nickName;
}

std::string Contacts::getLogin( void )
{
	return this->_login;
}

std::string Contacts::getPostalAddress( void )
{
	return this->_postalAddress;
}

std::string Contacts::getEmailAddress( void )
{
	return this->_emailAddress;
}

std::string Contacts::getPhoneNumber( void )
{
	return this->_phoneNumber;
}

std::string Contacts::getBirthdayDate( void )
{
	return this->_birthdayDate;
}

std::string Contacts::getFavoriteMeal( void )
{
	return this->_favoriteMeal;
}

std::string Contacts::getUnderwearColor( void )
{
	return this->_underwearColor;
}

std::string Contacts::getDarkestSecret( void )
{
	return this->_darkestSecret;
}
// --------------------------------------------------------//

// ---------------------- setters -------------------------//

void Contacts::setFirstName( void )
{
	std::string input;

	std::cout << std::endl <<"Set your fisrt name : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_firstName = input;
}

void Contacts::setLastName( void )
{
	std::string input;

	std::cout << "Set your last name : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_lastName = input;
}

void Contacts::setNickName( void )
{
	std::string input;

	std::cout << "Set you nickname : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_nickName = input;
}

void Contacts::setLogin( void )
{
	std::string input;

	std::cout << "Set your login : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_login = input;
}

void Contacts::setPostalAddress( void )
{
	std::string input;

	std::cout << "Set your postal address : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_postalAddress = input;
}

void Contacts::setEmailAddress( void )
{
	std::string input;

	std::cout << "Set your email address : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_emailAddress = input;
}

void Contacts::setPhoneNumber( void )
{
	std::string input;

	std::cout << "Set your phone number : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_phoneNumber = input;
}

void Contacts::setBirthdayDate( void )
{
	std::string input;

	std::cout << "Set your birthday date : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_birthdayDate = input;
}

void Contacts::setFavoriteMeal( void )
{
	std::string input;

	std::cout << "Set your favorite meal : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_favoriteMeal = input;
}

void Contacts::setUnderwearColor( void )
{
	std::string input;

	std::cout << "Set your underwear color : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_underwearColor = input;
}

void Contacts::setDarkestSecret( void )
{
	std::string input;

	std::cout << "Set your darkest secret : ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	this->_darkestSecret = input;
}
// --------------------------------------------------------//
