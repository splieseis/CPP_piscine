/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:42:42 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/23 14:44:15 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
  std::string* panthere = new std::string("String panthere");
  std::cout << *panthere << std::endl;
  delete panthere;
}
