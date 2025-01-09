/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:46:26 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/09 15:15:24 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

void	printElement(int elem)
{
	std::cout << elem << " ";
}

void	convertUppercase(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
	std::cout << arr << " ";
}

int main()
{
	{
		std::cout << "Test 1: Print out number from array" << std::endl;
		int arr[] = {5, 4, 3, 2, 1};
		size_t len = sizeof(arr) / sizeof(arr[0]);

		std::cout << "Length of array: " << len << std::endl;

		iter(arr, len, printElement);
		std::cout << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	{
		std::cout << "Test 2: convert to uppercase and print out result" << std::endl;
		char arr1[] = {'a', 'b', 'c', 'd', 'e'};
		size_t len = sizeof(arr1) / sizeof(arr1[0]);

		std::cout << "Length of array: " << len << std::endl;
		iter(arr1, len, convertUppercase);
		std::cout << std::endl;
	}
	return (0);
}
