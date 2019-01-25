/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:44:26 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/23 17:42:22 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent(std::string name, std::string type)
{
  this->type = type;
  newZombie(name);
  return ;
}

ZombieEvent::~ZombieEvent(void)
{
  std::cout << std::endl << "All Zombie Events are over. I wonder who survived." << std::endl;
  return ;
}

void ZombieEvent::setZombieType(std::string type)
{
  this->type = type;
  std::cout << "Zombietype: " << this->type << std::endl;
  return ;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
  Zombie *createZombie = new Zombie(name, this->type);
  return (createZombie);
}

Zombie* ZombieEvent::randomChump()
{
  srand(time(0));
  int i = rand();
  std::string name = " ";

  if (i % 10 == 0)
    name = "Undead Jack Seizmore";
  else if (i % 10 == 1)
    name = "Missing Mandable Melvin";
  else if (i % 10 == 2)
    name = "Hiro the Gutless";
  else if (i % 10 == 3)
    name = "Open Sole Shoemaker";
  else if (i % 10 == 4)
    name = "Meredith the Deaf";
  else if (i % 10 == 5)
    name = "Skull Cracker Isaiah";
  else if (i % 10 == 6)
    name = "No More Lisa";
  else if (i % 10 == 7)
    name = "Larry the Lifeless";
  else if (i % 10 == 8)
    name = "Vincent vanNoEars";
  else
    name = "Punching Glass Elliot";
  Zombie *createZombie = new Zombie(name, this->type);
  return (createZombie);
}
