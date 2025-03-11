/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:15:47 by gyong-si          #+#    #+#             */
/*   Updated: 2025/03/11 10:46:48 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/utils.hpp"

int main()
{
	{
		int a = 3;
		int	b = 5;
		std::cout << "Test swap" << std::endl;
		std::cout << "Before Swap" << std::endl;
		std::cout << "A: " << a << std::endl;
		std::cout << "B: " << b << std::endl;
		::swap(a, b);
		std::cout << "After Swap" << std::endl;
		std::cout << "A: " << a << std::endl;
		std::cout << "B: " << b << std::endl;
	}
		std::cout << "------------------" << std::endl;
	{
		double c = 2.0;
		double d = -1.341;

		std::cout << "The min value : " << ::min(c, d) << std::endl;
	}
		std::cout << "------------------" << std::endl;
	{
		float e = 12.81f;
		float f = 0.05f;

		std::cout << "The max value : " << ::max(e, f) << std::endl;
	}
	std::cout << "------------------" << std::endl;
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
		std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
		std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
	}
}
