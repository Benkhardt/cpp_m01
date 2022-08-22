/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:40:05 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/22 03:16:44 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie *z;

	z = newZombie("Dennis");
	z->Announce();
	randomChump("Vivian");
	delete (z);
	return (0);
}
