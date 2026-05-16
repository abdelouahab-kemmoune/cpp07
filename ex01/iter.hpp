#pragma once

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
