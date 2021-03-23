/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:23:03 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/20 13:02:37 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    /*---------- My tests ----------*/
    // Character *mbani = new Character("mbani");
    // Character *mamoussa = new Character("mamoussa");
    // mbani->equip(tmp); // cure at index 0
    // tmp = src->createMateria("ice");
    // mbani->equip(tmp); // ice at index 1
    // tmp = src->createMateria("ice");
    // mbani->equip(tmp); // ice at index 2
    // mbani->use(0, *me);
    // mbani->use(1, *bob);
    // mbani->use(2, *mbani);
	// std::cout << std::endl;
    // *mamoussa = *mbani;
    // mbani->unequip(2); // remove ice at index 2 from mbani
    // mamoussa->use(0, *me);
    // mamoussa->use(1, *bob);
    // mamoussa->use(2, *mbani);   
    // delete mbani;
    // delete mamoussa;
    /*---------- End ----------*/

    
    delete bob;
    delete me;
    delete src;
    return 0;
}