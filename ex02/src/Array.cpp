/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:56:42 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/09 17:02:19 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template <typename T>
Array<T>::Array() : data(nullptr), arraySize(0) {};

template <typename T>
Array<T>::Array(unsigned int n) : arraySize(n)
{
	data = new T[arraySize];
	for (size_t i = 0; i < arraySize; i++)
	{
		data[i] = T();
	}
}


template <typename T>
Array<T>::~Array() {};
