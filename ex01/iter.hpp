/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:13:15 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/15 12:39:03 by rozhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T* ptr_array, int const& i, void (*fct)(T const& ptr))
{
    int iterator;

    iterator = 0;
    while (iterator < i)
    {
        fct(ptr_array[iterator]);
        iterator++;
    }
}
template<typename T>
void    show(T ptr)
{
    std::cout << ptr << std::endl;
}

#endif