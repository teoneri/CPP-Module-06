/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:47:18 by mneri             #+#    #+#             */
/*   Updated: 2024/01/23 15:22:51 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include <cstdlib>

struct Data
{
	int intData;
};

class Serializer
{
	private:
		Serializer();
	public:
		~Serializer();
		Serializer(const Serializer &other);
    	Serializer &operator=(const Serializer &other);
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};