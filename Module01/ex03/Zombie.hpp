/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:50:44 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/24 17:56:37 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

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