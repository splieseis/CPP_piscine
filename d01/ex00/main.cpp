/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:10:47 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/23 17:33:11 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

static void ponyOnTheHeap(void)
{
  Pony  *Lilly = new Pony();

  Lilly->setName("Lilly");
  std::cout << "Name: " << Lilly->getName() << std::endl;
  Lilly->setType("British Riding Pony");
  std::cout << "Type: " << Lilly->getType() << std::endl;
  Lilly->setColor("black");
  std::cout << "Color: " << Lilly->getColor() << std::endl;
  delete Lilly;
}

static void ponyOnTheStack(void)
{
  Pony  Jimmy;

  Jimmy.setName("Jimmy");
  std::cout << "Name: " << Jimmy.getName() << std::endl;
  Jimmy.setType("Dartmoor Pony");
  std::cout << "Type: " << Jimmy.getType() << std::endl;
  Jimmy.setColor("brown");
  std::cout << "Color: " << Jimmy.getColor() << std::endl;
}

int main(void)
{
  std::cout << "Pony on the Heap" << std::endl;
  ponyOnTheHeap();
  std::cout << std::endl;
  std::cout << "Pony on the Stack" << std::endl;
  ponyOnTheStack();
  std::cout << std::endl;
  return (0);
}
