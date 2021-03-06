/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:50:44 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/06 14:46:20 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie{

private:
    std::string name;
    std::string type;    
public:

    void announce (void);
    
    Zombie( void );
    ~Zombie( void );
    
    void setName(std::string name);
    void setType(std::string type);

    std::string getName( void );
    std::string getType( void );
};

#endif