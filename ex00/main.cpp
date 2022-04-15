/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:38:45 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/15 12:55:04 by rozhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int a = 15;
    int b = 33;

    std::cout << "max = " << ::max<int>(a, b) << std::endl;
    std::cout << "min = " << ::min<int>(a, b) << std::endl;
    std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "max = " << ::max<int>(a, b) << std::endl;
    std::cout << "min = " << ::min<int>(a, b) << std::endl;
    std::cout << "a = " << a << std::endl << "b = " << b << std::endl;

    a = 2;
    b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    float af = 15.2f;
    float bf = 33.5f;

    std::cout << "max = " << ::max<float>(af, bf) << std::endl;
    std::cout << "min = " << ::min<float>(af, bf) << std::endl;
    std::cout << "af = " << af << std::endl << "bf = " << bf << std::endl;
    ::swap(af, bf);
    std::cout << "max = " << ::max<float>(af, bf) << std::endl;
    std::cout << "min = " << ::min<float>(af, bf) << std::endl;
    std::cout << "af = " << af << std::endl << "bf = " << bf << std::endl;

    std::cout << "max = " << ::max<int>(af, bf) << std::endl;
    std::cout << "min = " << ::min<int>(af, bf) << std::endl;
    std::cout << "af = " << af << std::endl << "bf = " << bf << std::endl;
    ::swap(af, bf);
    std::cout << "max = " << ::max<int>(af, bf) << std::endl;
    std::cout << "min = " << ::min<int>(af, bf) << std::endl;
    std::cout << "af = " << af << std::endl << "bf = " << bf << std::endl;

    return (0);
}