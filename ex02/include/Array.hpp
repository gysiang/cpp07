/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:45:21 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/09 17:00:26 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>

class Array
{
	private:
		T* 				array;
		unsigned int 	size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		Array &operator=(Array const &src);
		~Array(void);

};

#endif
