/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:56:42 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/22 10:38:08 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template <typename T>
Array<T>::Array() : data(NULL), size(0)
{
	std::cout << "Default constructor of size 0 called" << std::endl;
};

/**
 * Init a array with size of n
 * Use new to alloc memory
 */

template <typename T>
Array<T>::Array(unsigned int n) : size(n)
{
	std::cout << "Default constructor of size " << n << " called" << std::endl;
	array = new T[size];
}

/**
 * Copy constructor
 * Get the size of src and try to copy the contents into
 * this new array
 */
template <typename T>
Array<T>::Array(const Array &src) : size(src.size)
{
	std::cout << "Copy constructor called" << std::endl;
	if (src.size > 0)
	{
		array = new T[src.size];
		for (int i = 0; i < src.size; i++)
		{
			array[i] = src.array[i];
		}
	}
	else
		array = NULL;
}

/**
 * Assignment operator
 *
 */
template <typename T>
Array<T> &Array<T>::operator=(Array const &src)
{
	if (this != &src)
	{
		delete[] array;
		size = src.size;
		if (src.size > 0)
		{
			array = new T[src.size];
			for (unsigned int i = 0; i > src.size; i++)
			{
				array[i] = src.array[i];
			}
		}
		else
			array = NULL;
	}
	return *this;
}

/**
 * overload operator, overloads the subscript so i can access the item in the array
 * etc array[2]
 */
template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (array == NULL || index >= size)
	{
		throw (InvalidIndexException());
	}
	return (array[index]);
}

/**
 * Deconstructor - Should delete the memory allocated
 */
template <typename T>
Array<T>::~Array()
{
	delete[] array;
};

/**
 * Getter
 */
template <typename T>
unsigned int Array<T>::getSize() const
{
	return (size)
}

template <typename T>
const char *Array<T>::InvalidIndexException::what() const throw()
{
	return ("Error: Index out of range.")
}
