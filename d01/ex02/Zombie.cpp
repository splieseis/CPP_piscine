/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:02:43 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/23 17:04:45 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
  announce();
  return ;
}

Zombie::~Zombie()
{
  std::cout << this->name << " was slain!" << std::endl;
  return ;
}

void Zombie::announce(void)
{
  std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiinnnsss..." << std::endl;
  return ;
}
