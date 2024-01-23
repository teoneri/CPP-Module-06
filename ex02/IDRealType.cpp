/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IDRealType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:13:16 by mneri             #+#    #+#             */
/*   Updated: 2024/01/23 15:44:33 by mneri            ###   ########.fr       */
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
	{
		delete baseC;
		delete baseB;
		std::cout << "A class created.\n";
		return baseA;
	}
	else if(ranNum == 2)
	{
		delete baseC;
		delete baseA;
		std::cout << "B class created.\n";
		return baseB;
	}
	else if(ranNum == 3)
	{
		delete baseA;
		delete baseB;
		std::cout << "C class created.\n";
		return baseC;
	}
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
	C *baseC = dynamic_cast<C*>(p);
	if(baseC == NULL)
	{}
	else
	{
		std::cout << "C class: " << baseC << std::endl;
		return ;
	}
	std::cout << "error\n";
}

void identify(Base &p)
{
	try
	{
		A &baseA = dynamic_cast<A&>(p);
		std::cout << "A class: " << &baseA << std::endl;
		return ;
	}
	catch(std::exception &e)
	{
	}
	try
	{
		B &baseB = dynamic_cast<B&>(p);
		std::cout << "B class: " << &baseB << std::endl;
		return ;
	}
	catch(std::exception &e)
	{
	}
	try
	{
		C &baseC = dynamic_cast<C&>(p);
		std::cout << "C class: " << &baseC << std::endl;
		return ;
	}
	catch(std::exception &e)
	{
	}
}

A::A() {}

A::~A() {
}

B::B() {}

B::~B() {
}

C::C() {}

C::~C() {
}
Base::~Base() {
}