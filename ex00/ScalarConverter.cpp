/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:53:50 by mneri             #+#    #+#             */
/*   Updated: 2024/01/22 15:43:57 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter()
{}

void ScalarConverter::convert(char *type)
{
	int parse = ScalarConverter::parse_type(type);
	char charVal = '\0';
	int intVal = 0;
	float floVal = 0.0;
	double douVal = 0.0;

	switch (parse)
	{
	case CHARVAL:
		charVal = type[0];
		intVal = static_cast<int>(charVal);
		floVal = static_cast<float>(charVal);
		douVal = static_cast<float>(charVal);
		break;
	case INTVAL:
		intVal = std::atoi(type);
		charVal = static_cast<char>(intVal);
		floVal = static_cast<float>(intVal);
		douVal = static_cast<float>(intVal);
		break;
	case FLOVAL:
		floVal = std::atof(type);
		charVal = static_cast<char>(floVal);
		intVal = static_cast<float>(floVal);
		douVal = static_cast<float>(floVal);
		break;
	case DOUVAL:
		douVal = std::strtod(type, NULL);
		charVal = static_cast<char>(douVal);
		intVal = static_cast<float>(douVal);
		floVal = static_cast<float>(douVal);
		break;
	case INFVAL:
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
		return;
	case NEGINFVAL:
		std::cout << "char: impossible\nint:impossible\nfloat: -inff\ndouble: -inf\n";
		return;
	case NANVAL:
		std::cout << "char: impossible\nint:impossible\nfloat: nanf\ndouble: nan\n";
		return;
	default:
		break;
	}
	ScalarConverter::print_value(charVal, intVal, floVal, douVal);
}

void ScalarConverter::print_value(char charVal, int intVal, float floVal, double douVal)
{
	if(isprint(charVal))
		std::cout << "char: " << charVal << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << intVal << std::endl;
	if(floVal == intVal)
		std::cout << "float: "  << floVal << ".0f" << std::endl;
	else
		std::cout << "float: "  << floVal << "f" << std::endl;
	if(douVal == intVal)
		std::cout << "double: "  << douVal << ".0" << std::endl;
	else
		std::cout << "double: "  << douVal << std::endl;
}

int ScalarConverter::parse_type(char * type)
{
	if(std::strlen(type) == 1 && isprint(type[0]) && !isdigit(type[0]))
		return CHARVAL;
	else if(ScalarConverter::check_int(type) == 1)
		return INTVAL;
	else if(ScalarConverter::check_float(type) == 1)
		return FLOVAL;
	else if(ScalarConverter::check_double(type) == 1)
		return DOUVAL;
	else if(!std::strcmp(type, "+inf") || !std::strcmp(type, "+inff") || !std::strcmp(type, "+infl"))
		return INFVAL;
	else if(!std::strcmp(type, "-inf") || !std::strcmp(type, "-inff") || !std::strcmp(type, "-infl"))
		return NEGINFVAL;
	else if(!std::strcmp(type, "nan") || !std::strcmp(type, "nanf"))
		return NANVAL;
	else 
		return 0;
}

int ScalarConverter::check_int(char * type)
{
	int i = 0;

	if(type[i] == '-' || type[i] == '+')
		i++;
	while(type[i])
	{
		if(!isdigit(type[i]))
			return 0;
		else 
			i++;
	}
	return 1;
}

int ScalarConverter::check_float(char * type)
{
	int i = 0;
	int dot = 0;
	int f = 0;
	if(type[i] == '-' || type[i] == '+')
		i++;
	while(type[i])
	{
		if(type[i] == '.')
		{
			dot++;
			i++;
		}
		if((type[i] == 'f' || type[i] == 'F') && std::strlen(type) == (size_t)(i + 1))
		{
			i++;
			f++;
			continue;
		}
		if(!isdigit(type[i]))
			return 0;
		i++;
	}
	if(dot > 1 || f != 1)
		return 0;
	return 1;
}

int ScalarConverter::check_double(char * type)
{
	int i = 0;
	int dot = 0;
	if(type[i] == '-' || type[i] == '+')
		i++;
	while(type[i])
	{
		if(type[i] == '.')
		{
			dot++;
			i++;
		}
		if(!isdigit(type[i]))
			return 0;
		i++;
	}
	if(dot > 1)
		return 0;
	return 1;
}


