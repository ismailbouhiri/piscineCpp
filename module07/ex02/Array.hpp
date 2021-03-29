/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:35:11 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/29 11:05:45 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T=int>
class Array
{

private:

	unsigned int _N;
	T *_Array;

public:

	Array<T>( void ): _N(0), _Array(nullptr) {}

	Array<T>( const unsigned int& n ) : _N(n) {
		this->_Array = new(std::nothrow) T[n]();
		if ( !this->_Array )
			std::cout << "allocation failled !!" << *_Array << std::endl;
	}

	Array<T>( const Array<T>& CObj ) {
		*this = CObj;
	}
	
	Array& operator=( const Array<T>& CObj ) {

		if (this->_Array) {
			delete [] this->_Array;
		}
		this->_N = CObj.size();
		this->_Array = new T[this->_N]();
		for (unsigned int i = 0; i < this->_N; i++)
		{
			this->_Array[i] = CObj._Array[i];
		}
		return ( *this );
	}

	T& operator[]( const unsigned int& i )
	{
		if (i < this->_N ) {
			return this->_Array[i];
		}
		else {
			throw std::exception();
		}
	}

	~Array<T> ( void ){
		if (_Array) {
			delete [] this->_Array;
			_Array = NULL;
		}
	};

	const unsigned int& size( void ) const {
		return this->_N;
	}

	T& getArray( void ) const {
		return this->_Array;
	}
	
};

#endif