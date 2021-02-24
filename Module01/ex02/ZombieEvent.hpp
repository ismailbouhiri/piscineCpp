/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:50:49 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/02/24 17:56:30 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

# include "Zombie.hpp"

class ZombieEvent{
    
public:

    void setZombieType( Zombie & obj );
    
    Zombie* newZombie(std::string name);
    
    ZombieEvent( void );
    ~ZombieEvent( void );
};

#endif