/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:28:48 by mneri             #+#    #+#             */
/*   Updated: 2024/01/22 17:01:59 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data *data = new Data();
	data->intData = 15;
	std::cout << "data:" << data << std::endl;
	std::cout << "data:" <<  data->intData << std::endl;
	uintptr_t serData = Serializer::serialize(data);
	Data *deserialized = Serializer::deserialize(serData);
	std::cout << "deserialized: " << deserialized  << std::endl;
	std::cout << "deserialized: " <<  deserialized->intData << std::endl;

	delete data;
}