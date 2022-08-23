/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:43:35 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/23 08:12:27 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	std::cout << "Zombie " << " spawned." << std::endl;
}

Zombie::~Zombie(void){
	std::cout << "Zombie " << this->_name << " destroyed." << std::endl;
}

void	Zombie::Announce(void){
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetName(std::string name){
	this->_name = name;
	this->Announce();
}
