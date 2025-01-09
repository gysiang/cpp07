/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:18:31 by gyong-si          #+#    #+#             */
/*   Updated: 2025/01/09 13:29:43 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <cmath>

template <typename T>

void swap(T &a, T &b)
{
	T n = a;
	a = b;
	b = n;
};

template <typename T>

T min(const T &a, const T &b)
{
	if (std::abs(a) < std::abs(b))
		return (a);
	else
		return (b);
}

template <typename T>

T max(const T &a,const T &b)
{
	if (std::abs(a) < std::abs(b))
		return (b);
	else
		return (a);
}

#endif
