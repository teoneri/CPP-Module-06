/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:46:11 by mneri             #+#    #+#             */
/*   Updated: 2024/01/18 17:20:07 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ScalarConverter::convert(argv[1]); 
		// ScalarConverter::convert("42");         // Example with int
		// ScalarConverter::convert("3.14f");      // Example with float
		// ScalarConverter::convert("-4.2");       // Example with double
		// ScalarConverter::convert("A");        // Example with char
		// ScalarConverter::convert("-inff");      // Example with -inf float
		// ScalarConverter::convert("+inff");      // Example with +inf float
		// ScalarConverter::convert("nanf");       // Example with nan float
		// ScalarConverter::convert("-inf");       // Example with -inf double
		// ScalarConverter::convert("+inf");       // Example with +inf double
		// ScalarConverter::convert("nan");   
	}
}