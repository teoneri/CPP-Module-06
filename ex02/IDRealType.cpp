/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IDRealType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:13:16 by mneri             #+#    #+#             */
/*   Updated: 2024/01/22 17:47:45 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IDRealType.hpp"

Base *generate(void)
{
	A *baseA = new A();
	B *baseB = new B();
	C *baseC = new C();
	std::srand(std::time(0));
    int ranNum = std::rand() % 3 + 1;
	if(ranNum == 1)
		return baseA;
	else if(ranNum == 2)
		return baseB;
	else if(ranNum == 3)
		return baseC;
	return NULL;
}

void identify(Base *p)
{
	A *baseA = dynamic_cast<A*>(p);
	if(baseA == NULL)
	{}
	else
	{
		std::cout << "A class: " << baseA << std::endl;
		return ;
	}
	B *baseB = dynamic_cast<B*>(p);
	if(baseB == NULL)
	{}
	else
	{
		std::cout << "B class: " << baseB << std::endl;
		return ;
	}
	B *baseC = dynamic_cast<B*>(p);
	if(baseC == NULL)
	{}
	else
	{
		std::cout << "C class: " << baseC << std::endl;
		return ;
	}
	std::cout << "error\n";
}

