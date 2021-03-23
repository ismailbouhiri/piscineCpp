/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:23:08 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 13:03:00 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:

    AMateria** LearnTab;

public:

    MateriaSource( void );
    MateriaSource( MateriaSource const& CObj );
    MateriaSource& operator=( MateriaSource const& CObj );
    virtual ~MateriaSource ( void );

    virtual void learnMateria( AMateria* Learn );
    virtual AMateria* createMateria( std::string const & type );
};

#endif