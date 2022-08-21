/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:26:43 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/21 23:07:22 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

//includes
# include <iostream>
# include <iomanip>
//includes end

//classes

class   Zombie{

    public:
        void    SetName(void *str); // set name of zombie
        void    Announce(void); // zombie announcing themselves :D

    private:
        void *_name;
};

//classes end

#endif
