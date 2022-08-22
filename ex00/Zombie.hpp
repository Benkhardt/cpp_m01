/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:26:43 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/22 02:49:37 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

//includes
# include <iostream>
# include <iomanip>
//includes end

//classes
class	Zombie{
public:
    void    Announce(void); // zombie announcing themselves :D
			Zombie(std::string name);
			~Zombie(void);
private:
	std::string _name;
};
//classes end

//prototypes
Zombie* newZombie( std::string name );
void	randomChump( std::string name );
//prototypes
#endif
