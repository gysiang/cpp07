/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:15:47 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/09 13:34:59 by gyong-si         ###   ########.fr       */
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
		swap(a, b);
		std::cout << "After Swap" << std::endl;
		std::cout << "A: " << a << std::endl;
		std::cout << "B: " << b << std::endl;
	}
		std::cout << "------------------" << std::endl;
	{
		double c = 2.0;
		double d = -1.341;

		std::cout << "The min value : " << min(c, d) << std::endl;
	}
		std::cout << "------------------" << std::endl;
	{
		double e = 12.0f;
		double f = 1.341;

		std::cout << "The max value : " << max(e, f) << std::endl;
	}
	std::cout << "------------------" << std::endl;

}
