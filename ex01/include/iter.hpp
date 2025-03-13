/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:46:30 by gyong-si          #+#    #+#             */
/*   Updated: 2025/03/11 10:48:55 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T,typename Func>

/**
 * Function iterates through the array and applys a function on each element
 */
void iter(T* arr, size_t length, Func func)
{
	if (!arr || !func)
		return ;
	for (size_t i = 0; i < length; i++)
	{
		func(arr[i]);
	}
	return ;
}

#endif
