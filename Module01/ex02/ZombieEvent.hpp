/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:50:49 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/06 14:46:17 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent{
    
public:

    void setZombieType( Zombie & obj );
    
    Zombie* newZombie(std::string name);
    
    ZombieEvent( void );
    ~ZombieEvent( void );
};

#endif