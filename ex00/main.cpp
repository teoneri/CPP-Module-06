/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:46:11 by mneri             #+#    #+#             */
/*   Updated: 2024/01/23 15:01:40 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ScalarConverter::convert(argv[1]); 
		// ScalarConverter::convert("42");         
		// ScalarConverter::convert("3.14f");      
		// ScalarConverter::convert("-4.2");      
		// ScalarConverter::convert("A");        
		// ScalarConverter::convert("-inff");      
		// ScalarConverter::convert("+inff");      
		// ScalarConverter::convert("nanf");       
		// ScalarConverter::convert("-inf");       
		// ScalarConverter::convert("+inf");       
		// ScalarConverter::convert("nan");   
	}
}