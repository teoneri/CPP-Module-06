/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:40:03 by mneri             #+#    #+#             */
/*   Updated: 2024/01/23 14:57:23 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IDRealType.hpp"

int main()
{
	Base *base = generate();
	Base &base1 = *base;
	identify(base);
	identify(base1);
	delete base;
}