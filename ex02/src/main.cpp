/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:45:52 by gyong-si          #+#    #+#             */
/*   Updated: 2025/03/11 11:32:25 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include <cstdlib>
#include <sstream>


int main()
{
	{
		std::cout << " Try to compile int * a = new int(); then display *a" << std::endl;
		int *a = new int();
		std::cout << "*a: " << *a << std::endl;
		delete a;
	}
		std::cout << std::endl;
		std::cout << "------------------------" << std::endl;
		std::cout << std::endl;
	{
		Array<std::string> array1(5);
		std::string	*a = new std::string[5];

		for (int i = 0; i < 5; i++)
		{
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
		
		std::cout << std::endl;
		std::cout << "Accessing out of index operator" << std::endl;
		try
		{
			std::cout << array1[5] << std::endl;
		} catch (const std::exception &e) {
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
		delete[] a;
	}
	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;
	{
		std::cout << "Test copy operator" << std::endl;
		Array<std::string> array1(5);
		
		for (int i = 0; i < 5; i++)
		{
			std::ostringstream oss;
			oss << (i + 1);
			std::string val = "String " + oss.str();
			array1[i] = val;
		}

		Array<std::string> array2 = array1;

		std::cout << "Before changing";
		std::cout << "array1 contents:" << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << "array1[" << i << "]: " << array1[i] << std::endl;

		std::cout << "array2 (copied) contents:" << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << "array2[" << i << "]: " << array2[i] << std::endl;

		array1[0] = "String modified";
		std::cout << "After changing: modifying either the original array or its copy after copying must not affect the other array\n";

		// Print both arrays to verify
		std::cout << "array1 contents:" << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << "array1[" << i << "]: " << array1[i] << std::endl;

		std::cout << "array2 (copied) contents:" << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << "array2[" << i << "]: " << array2[i] << std::endl;

	}
	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;
	{
		std::cout << "Test copy assignment operator" << std::endl;
		Array<std::string> array1(5);
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
	}

}
