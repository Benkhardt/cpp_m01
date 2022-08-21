/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:40:05 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/21 23:04:10 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    newZombie(Zombie **Zombie, int i, char *str){
    (*Zombie)[i].SetName(str);
    (*Zombie)[i].Announce();
}

int main(int argc, char **argv){
    if (argc < 2){
        std::cout << "put in some Zombie names..." << std::endl;
    }
    Zombie  *Zombies;

    Zombies = new Zombie[argc - 1];
    for (int i = 1; i < argc; i++){
        std::cout << i << std::endl;
        newZombie(&Zombies, i, argv[i]);
    }
    delete[] Zombies;
    return (0);
}
