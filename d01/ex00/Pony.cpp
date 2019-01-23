/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:58:58 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/23 22:06:03 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void){ return ; }
Pony::~Pony(void){ return ; }

/* Setters */

void setName(std::string str)
{
  this->_name = str;
  return ;
}

void setType(std::string str)
{
  this->_type = str;
  return ;
}

void setColor(std::string str)
{
  this->_color = str;
  return ;
}

/* Getters */

std::string Pony::getName(void)
{
  return (this->_name);
}

std::string Pony::getType(void)
{
  return (this->_type);
}

std::string Pony::getColor(void)
{
  return (this->_color);
}
