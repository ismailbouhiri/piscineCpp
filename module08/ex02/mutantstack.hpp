/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:35:10 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/04/01 09:39:16 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public :
    MutantStack( void );
    MutantStack(const MutantStack<T> &);
    void operator=(const MutantStack<T> &);
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    iterator begin( void );
    iterator end( void );
    reverse_iterator rbegin( void );
    reverse_iterator rend( void );
    ~MutantStack ( void );
};

#endif
