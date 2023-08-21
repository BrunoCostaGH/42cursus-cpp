/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:30:06 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/08/21 17:33:47 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>
#include <sstream>
#include <limits>

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &)
{}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &)
{
	return (*this);
}

ScalarConverter::~ScalarConverter()
{}

static int convert_int(const char *argv, const std::string &value)
{
	int	res;
	std::stringstream ss(value);

	if (value.length() == 1 && !isdigit(value[0]))
		return (argv[0]);
	ss >> res;
	return (res);
}

static float convert_float(const char *argv, const std::string &value)
{
	float	res;
	std::stringstream ss(value);

	if (value.length() == 1 && !isdigit(value[0]))
		return (argv[0]);
	ss >> res;
	return (res);
}

static double convert_double(const char *argv, const std::string &value)
{
	double	res;
	std::stringstream ss(value);

	if (value.length() == 1 && !isdigit(value[0]))
		return (argv[0]);
	ss >> res;
	return (res);
}

static void print_table(const int *aI, const float *aF, const double *aD)
{
	std::stringstream	c, i, f, d;

	// Char
	if (aI && *aI < std::numeric_limits<int>::max() && *aI > std::numeric_limits<int>::min() &&\
		(*aI >= 0 && *aI < 256))
	{
		if (std::isprint(*aI))
			c << "'" << char(*aI) << "'";
		else
			c << "Non displayable";
	}
	else
		c << "impossible";
	// Int
	if (aI && *aI < std::numeric_limits<int>::max() && *aI > std::numeric_limits<int>::min()) // check if in int range
		i << *aI;
	else
		i << "impossible";
	// Float
	f << *aF;
	if (*aF != std::numeric_limits<float>::infinity() && \
		*aF != std::numeric_limits<float>::quiet_NaN() && int(*aF * 10) % 10 == 0)
		f << ".0";
	// Double
	d << *aD;
	if (*aD != std::numeric_limits<float>::infinity() && \
		*aD != std::numeric_limits<float>::quiet_NaN() && int(*aD * 10) % 10 == 0)
		d << ".0";

	std::cout << "char: " << c.str() << std::endl;
	std::cout << "int: " << i.str() << std::endl;
	std::cout << "float: " << f.str() << "f" << std::endl;
	std::cout << "double: " << d.str() << std::endl;
}

void ScalarConverter::convert(const char *argv, const std::string &literal)
{
	int		i = convert_int(argv, literal);
	float	f = convert_float(argv, literal);
	double	d = convert_double(argv, literal);

	if (literal == "nan")
	{
		f = std::numeric_limits<float>::quiet_NaN();
		d = std::numeric_limits<double>::quiet_NaN();
		print_table(0, &f, &d);
	}
	else if (literal == "inf" || literal == "inff")
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
	else if ((literal.find_first_not_of("123456789.") == std::string::npos &&\
			literal.find_first_of('.') == literal.find_last_of('.')) || \
			(literal.find_first_not_of("123456789.f") == std::string::npos &&\
			literal.find_first_of('.') == literal.find_last_of('.') && \
			literal.find_first_of('f') == literal.length() - 1) || \
			isprint(literal[0]))
	{
		print_table(&i, &f, &d);
	}
	else
		std::cout << "Invalid conversion\n";
}
