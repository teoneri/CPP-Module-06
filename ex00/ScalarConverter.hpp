/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:46:51 by mneri             #+#    #+#             */
/*   Updated: 2024/01/23 15:19:53 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <iomanip>

#define CHARVAL 1
#define INTVAL  2
#define FLOVAL 3
#define DOUVAL 4
#define INFVAL 5
#define NEGINFVAL 6
#define NANVAL 7
class ScalarConverter
{
private:
	ScalarConverter();
public:
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);
	static void convert(char *type);
	static int parse_type(char *type);
	static int check_int(char *type);
	static int check_float(char *type);
	static int check_double(char *type);
	static void print_value(char charVal, int intVal, float floVal, double douVal);

};
