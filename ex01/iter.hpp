/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:48:44 by akemmoun          #+#    #+#             */
/*   Updated: 2025/08/11 19:48:46 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>
#include <string>

template <typename T>
void	print( T &i )
{
	std::cout << i << std::endl;
}

template <typename T, typename Func>
void iter(T* array, size_t size, Func f)
{
    if (!array)
        return;

    for (size_t i = 0; i < size; ++i)
        f(array[i]);
}

template <typename T, typename Func>
void iter(const T* array, size_t size, Func f)
{
    if (!array)
        return;

    for (size_t i = 0; i < size; ++i)
        f(array[i]);
}

#endif