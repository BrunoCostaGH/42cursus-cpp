/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:30:06 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/09/19 18:03:28 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>
#include <sstream>
#include <limits>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter&)
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&)
{
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

static void convert_int(const std::string& value, int* i, float* f, double* d)
{
	std::stringstream ss(value);

	ss >> *i;
	*f = static_cast<float>(*i);
	*d = static_cast<double>(*i);
}

static void convert_float(const std::string& value, int* i, float* f, double* d)
{
	std::stringstream ss(value);

	ss >> *f;
	*i = static_cast<int>(*f);
	*d = static_cast<double>(*f);
}

static void convert_double(const std::string& value,
	int* i,
	float* f,
	double* d)
{
	std::stringstream ss(value);

	ss >> *d;
	*i = static_cast<int>(*d);
	*f = static_cast<float>(*d);
}

static void print_table(const int* aI, const float* aF, const double* aD)
{
	std::stringstream c, i, f, d;

	// Char
	if (aI && *aI < std::numeric_limits<int>::max() &&
		*aI > std::numeric_limits<int>::min() && (*aI >= 0 && *aI < 256))
	{
		if (std::isprint(*aI))
			c << "'" << char(*aI) << "'";
		else
			c << "Non displayable";
	}
	else
		c << "impossible";
	// Int
	if (aI && *aI < std::numeric_limits<int>::max() &&
		*aI > std::numeric_limits<int>::min()) // check if in int range
		i << *aI;
	else
		i << "impossible";
	// Float
	f << *aF;
	if (*aF != std::numeric_limits<float>::infinity() &&
		*aF != std::numeric_limits<float>::quiet_NaN() &&
		int(*aF * 10) % 10 == 0)
		f << ".0";
	// Double
	d << *aD;
	if (*aD != std::numeric_limits<float>::infinity() &&
		*aD != std::numeric_limits<float>::quiet_NaN() &&
		int(*aD * 10) % 10 == 0)
		d << ".0";

	std::cout << "char: " << c.str() << std::endl;
	std::cout << "int: " << i.str() << std::endl;
	std::cout << "float: " << f.str() << "f" << std::endl;
	std::cout << "double: " << d.str() << std::endl;
}

static int convertFromInitialType(const std::string& literal,
	int* i,
	float* f,
	double* d)
{
	if (literal.length() == 1 && !isdigit(literal[0]))
	{
		*i = static_cast<unsigned char>(literal[0]);
		*f = static_cast<unsigned char>(literal[0]);
		*d = static_cast<unsigned char>(literal[0]);
		return (0);
	}
	if ((literal.find_first_not_of("123456789.") == std::string::npos &&
		 literal.find_first_of('.') == literal.find_last_of('.')))
		convert_double(literal, i, f, d);
	else if ((literal.find_first_not_of("123456789.f") == std::string::npos &&
			  literal.find_first_of('.') == literal.find_last_of('.') &&
			  literal.find_first_of('f') == literal.length() - 1))
		convert_float(literal, i, f, d);
	else if (isprint(literal[0]))
		convert_int(literal, i, f, d);
	else
	{
		std::cout << "Invalid conversion\n";
		return (1);
	}
	return (0);
}

void ScalarConverter::convert(const std::string& literal)
{
	int i = 0;
	float f = 0;
	double d = 0;

	if (convertFromInitialType(literal, &i, &f, &d))
		return;
	if (literal == "nan" || literal == "+nan")
	{
		f = std::numeric_limits<float>::quiet_NaN();
		d = std::numeric_limits<double>::quiet_NaN();
		print_table(0, &f, &d);
	}
	else if (literal == "inf" || literal == "inff" || literal == "+inf" ||
			 literal == "+inff")
	{
		f = std::numeric_limits<float>::infinity();
		d = std::numeric_limits<double>::infinity();
		print_table(0, &f, &d);
	}
	else if (literal == "-inf" || literal == "-inff")
	{
		f = -std::numeric_limits<float>::infinity();
		d = -std::numeric_limits<double>::infinity();
		print_table(0, &f, &d);
	}
	else
		print_table(&i, &f, &d);
}
