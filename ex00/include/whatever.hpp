/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:02:04 by gyong-si          #+#    #+#             */
/*   Updated: 2025/03/14 13:02:05 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

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
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>

T max(const T &a,const T &b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

#endif
