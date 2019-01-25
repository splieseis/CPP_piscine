/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:14:23 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/23 17:43:33 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
  std::cout << "A Zombie spawns on the Stack" << std::endl;
  Zombie Gary = Zombie("Almost-A-Ghost Gary", "Skin eater");

  std::cout << std::endl << "A Zombie Event spawns on the Heap" << std::endl;
  ZombieEvent *rZombie = new ZombieEvent("Still Dancing Hemphill", "Walker");

  std::cout << std::endl << "The Zombietype was set to Roamer" << std::endl;
  rZombie->setZombieType("Roamer");

  std::cout << std::endl << "A Zombie Event spawns on the Heap" << std::endl;
  rZombie->newZombie("Harold Bitemark");

  std::cout << std::endl << "The Zombietype was set to Rotter" << std::endl;
  rZombie->setZombieType("Rotter");

  std::cout << std::endl << "Spawning a random Zombie on the Heap" << std::endl;
  rZombie->randomChump();

  delete rZombie;
  return (0);
}
