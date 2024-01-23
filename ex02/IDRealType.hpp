/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IDRealType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:13:13 by mneri             #+#    #+#             */
/*   Updated: 2024/01/23 14:58:45 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		A();
		~A();
};

class B : public Base
{
	public:
		B();
		~B();

};

class C : public Base
{
	public:
		C();
		~C();

};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);