/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:42:45 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/23 08:05:10 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    nameHorde(Zombie **horde, int N, std::string name){
    for (int i = 0; i < N; i++){
        (*horde)[i].SetName(name);
    }
}

Zombie* zombieHorde( int N, std::string name ){
    Zombie  *horde;
    int     i;

    if (N < 0)
        return (NULL);
    horde = new Zombie[N];
    nameHorde(&horde, N, name);
    return (horde);
}
