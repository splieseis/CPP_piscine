/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:53:41 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/23 16:57:54 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
  std::string str = "HI THIS IS BRAIN";
  std::string *ptr = &str;
  std::string &ref = str;

  std::cout << "The string displayed with a pointer: " << *ptr << std::endl;
  std::cout << "The string displyed buy using the reference: " << ref << std::endl;

  return (0);
}
