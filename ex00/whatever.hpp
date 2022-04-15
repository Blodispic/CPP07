/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:38:42 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/15 11:11:25 by rozhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void  swap(T& x, T& y)
{
    T mem;
    
    mem = x;
    x = y;
    y = mem;
} 

template<typename T>
T const&  min(T const& x, T const& y)
{
    if (x < y)
        return (x);
    return (y);
} 

template<typename T>
T const&  max(T const& x, T const& y)
{
    if (x > y)
        return (x);
    return (y);
}
#endif