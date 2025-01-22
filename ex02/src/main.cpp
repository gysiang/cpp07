/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:45:52 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/22 13:21:59 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include <cstdlib>
#include <sstream>


int main()
{
	Array<std::string> array1(5);
	std::string	*a = new std::string[5];

	//srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		//const int val = rand();
		std::ostringstream oss;
		oss << (i + 1);
		std::string val = "String " + oss.str();
		array1[i] = val;
		a[i] = val;
	}
	for (int i = 0; i < 5; i++)
		std::cout << "array1[" << i << "]:\t" << array1[i] << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "a[" << i << "]:\t" << a[i] << std::endl;
	Array<std::string> tmp;
	tmp = array1;

	array1[0] = "String modified";
	std::cout << "After changing: modifying either the original array or its copy after copying must not affect the other array\n";
	for (int i = 0; i < 5; i++)
		std::cout << "array1[" << i << "]:\t" << array1[i] << std::endl;
	for (int j = 0; j < 5; j++)
		std::cout << "tmp[" << j << "]:\t" << tmp[j] << std::endl;
	// Test Getsize
	std::cout << "Test getsize\n";
	std::cout << "Size of array1: " << array1.getSize() << std::endl;

	delete[] a;
}
