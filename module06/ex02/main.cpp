/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:02:54 by ibouhiri          #+#    #+#             */
/*   Updated: 2021/03/25 20:12:02 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void)
{
	int n = rand() % 3;
	Base *base;

	if (!n)
	{
		std::cout << "Me => A" << std::endl;
		base = new A;
		return (base);
	}
	else if (n == 1)
	{
		std::cout << "Me => B" << std::endl;
		base = new B;
		return (base);
	}
	else{
		std::cout << "Me => C" << std::endl;
		base = new C;
		return (base);
	}
	return ( NULL );
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p)){
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p)){
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p)){
		std::cout << "C" << std::endl;	
	}
	else{
		std::cout << "UNKNOWN" << std::endl;		
	}
}

void identify_from_reference( Base & p)
{
	if (dynamic_cast<A*>(&p)){
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(&p)){
		std::cout << "B" << std::endl;	
	}
	else if (dynamic_cast<C*>(&p)){
		std::cout << "C" << std::endl;	
	}
	else{
		std::cout << "UNKNOWN" << std::endl;		
	}
}
int		main( void )
{
	srand(time(nullptr));
	Base *base;
	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	return ( 0 );
}