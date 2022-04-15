/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:19:23 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/15 15:21:05 by rozhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
    private:
        T   *_array;
        int _size;
        
    public:
        Array() : _size(0)
        {
            this->_array = NULL;
        }
        
        Array(unsigned int n): _size(n)
        {
            unsigned int i;

            this->_array = new T[n];
            i = -1;
            while (++i < n)
                this->_array[i] = 0;
            return ;    
        }

        Array(Array const& src): _size(src._size)
        {
            int i;

            i = -1;
            this->_array = new T[src._size];
            while (++i < src._size)
                this->_array[i] = src._array[i];
        }
        ~Array()
        {
            delete [] this->_array;
            return ;
        }

        Array & operator=(Array const& rhs)
        {
            int i;

            delete [] this->_array;
            i = -1;
            this->_array = new T[rhs._size];
            while (++i < rhs._size)
                this->_array[i] = rhs._array[i];
            return (*this);
        }
        
        T& operator[](int const& integer)
        {
                if (integer < 0 || integer > this->_size - 1)
                    throw std::exception();
                return (this->_array[integer]);
        }
        
        int size()
        {
            return (this->_size);
        }
    
};



#endif