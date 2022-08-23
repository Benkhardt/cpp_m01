/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:26:43 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/23 08:20:04 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <new>

class	Zombie{

	public:
				Zombie();
		void    Announce(void);
		void	SetName(std::string name);
				~Zombie();

	private:
		std::string _name;
};

class	Horde{
	int	N;
	Zombie	*horde;
	std::string	_name;

	public:
		Horde(int N, std::string name);
		~Horde();
};

Zombie* zombieHorde( int N, std::string name );

#endif
