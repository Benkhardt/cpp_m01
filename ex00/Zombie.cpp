/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:43:35 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/21 23:06:08 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::SetName(void *str){
    _name = str;
}

void    Zombie::Announce(void){
    char *str;
    
    str = (char *)_name;
    std::cout << str;
    std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}
