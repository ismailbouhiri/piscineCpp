/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:58:40 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/20 12:39:39 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
# include <iostream>
# include <string>
# include <iomanip>

class Contacts{

private:
    // info contact attributs=variables
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _login;
    std::string _postalAddress;
    std::string _emailAddress;
    std::string _phoneNumber;
    std::string _birthdayDate;
    std::string _favoriteMeal;
    std::string _underwearColor;
    std::string _darkestSecret;
    
public:

    // info contact attributs=variables
    Contacts ( void ); // constractor fonction 
    ~Contacts( void ); // destractor fonction
    
    std::string getFirstName( void );
    std::string getLastName( void );
    std::string getNickName( void );
    std::string getLogin( void );
    std::string getPostalAddress( void );
    std::string getEmailAddress( void );
    std::string getPhoneNumber( void );
    std::string getBirthdayDate( void );
    std::string getFavoriteMeal( void );
    std::string getUnderwearColor( void );
    std::string getDarkestSecret( void );

    void setFirstName( std::string );
    void setLastName( std::string );
    void setNickName( std::string );
    void setLogin( std::string );
    void setPostalAddress( std::string );
    void setEmailAddress( std::string );
    void setPhoneNumber( std::string );
    void setBirthdayDate( std::string );
    void setFavoriteMeal( std::string );
    void setUnderwearColor( std::string );
    void setDarkestSecret( std::string );
    
};

std::string     enterInfo(std::string info);
std::string     ft_upper(std::string input);

#endif