/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:37:36 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/23 15:44:14 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
  public:
    ZombieEvent(std::string name, std::string type);
    ~ZombieEvent(void);

    std::string type;

    void setZombieType(std::string type);
    Zombie *newZombie(std::string name);
    Zombie *randomChump();
};

#endif
