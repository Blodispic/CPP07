/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:13:18 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/15 13:18:12 by rozhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    char str[] = "J'aime les pommes";
    std::string string_array[] = {"j'aime les pommes", "mais pas trop", "un peu quand", "Mais bon, les pommes c'est bon quand meme" };
    int i[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    iter(str, 17, show);
    iter(string_array, 4, show);
    iter(i, 10, show);
}