/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classContacts.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:06:55 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/20 12:44:01 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contacts::Contacts( void ) {
    return ;
}

Contacts::~Contacts( void ){
    return ;
}

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