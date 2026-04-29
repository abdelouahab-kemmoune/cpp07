/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:48:44 by akemmoun          #+#    #+#             */
/*   Updated: 2025/08/11 19:48:46 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// void print(const int& x)
// {
//     std::cout << x << " ";
// }

// void printStr(const std::string& s)
// {
//     std::cout << s << " ";
// }

// int main() {
//     int arr1[] = {1, 2, 3};
//     iter(arr1, 3, print);

//     std::string arr2[] = {"hello", "world"};
//     iter(arr2, 2, printStr);
// }

void	add( int &i )
{
	i++;
}

int	main()
{
	int array[] = {1, 2, 3, 4};
	iter(array, 4, print<int>);
	std::cout << "\n";
	iter(array, 4, add);
	iter(array, 4, print<int>);
	std::cout << "\n";
}