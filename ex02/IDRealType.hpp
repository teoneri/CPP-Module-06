/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IDRealType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:13:13 by mneri             #+#    #+#             */
/*   Updated: 2024/01/22 17:47:49 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		A();
};

class B : public Base
{
	public:
		B();
};

class C : public Base
{
	public:
		C();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);