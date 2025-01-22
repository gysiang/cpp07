/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:45:21 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/22 10:32:20 by gyong-si         ###   ########.fr       */
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

		// getters
		unsigned int getSize() const;

		// overload operator
		T &operator[](unsigned int index);

		// Exception
		class InvalidIndexException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		}

};

#endif
