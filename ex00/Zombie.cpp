/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:43:35 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/22 03:18:31 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
	std::cout << "Zombie " << this->_name << " spawned." << std::endl;
}

Zombie::~Zombie(void){
	std::cout << "Zombie " << this->_name << " destroyed." << std::endl;
}

void	Zombie::Announce(void){
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
