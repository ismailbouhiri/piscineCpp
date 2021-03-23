/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:22:48 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 13:03:25 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{

private:

    Character( void );

    std::string _Name; 
    AMateria** _Materias;

public:

    Character( std::string const& name );
    Character( Character const& CObj );
    Character& operator=( Character const& CObj );
    virtual ~Character ( void );

    virtual std::string const & getName( void ) const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif