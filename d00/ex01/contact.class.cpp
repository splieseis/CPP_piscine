/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 11:42:45 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/22 16:38:08 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void) { return ;}

Contact::~Contact(void) { return ;}

/* Getters */

std::string Contact::getFirstName(void)
{
  return (this->_firstName);
}

std::string Contact::getLastName(void)
{
  return (this->_lastName);
}

std::string Contact::getNickName(void)
{
  return (this->_nickName);
}

std::string Contact::getLogin(void)
{
  return (this->_login);
}

std::string Contact::getPostalAddress(void)
{
  return (this->_postalAddress);
}

std::string Contact::getEmailAddress(void)
{
  return (this->_emailAddress);
}

std::string Contact::getPhoneNumber(void)
{
  return (this->_phoneNumber);
}

std::string Contact::getBirthdayDate(void)
{
  return (this->_birthdayDate);
}

std::string Contact::getFavoriteMeal(void)
{
  return (this->_favoriteMeal);
}

std::string Contact::getUnderwearColor(void)
{
  return (this->_underwearColor);
}

std::string Contact::getDarkestSecret(void)
{
  return (this->_darkestSecret);
}

/* Setters */

void Contact::setFirstName(std::string str)
{
    this->_firstName = str;
    return ;
}

void Contact::setLastName(std::string str)
{
    this->_lastName = str;
    return ;
}

void Contact::setNickName(std::string str)
{
    this->_nickName = str;
    return ;
}

void Contact::setLogin(std::string str)
{
    this->_login = str;
    return ;
}

void Contact::setPostalAddress(std::string str)
{
    this->_postalAddress = str;
    return ;
}

void Contact::setEmailAddress(std::string str)
{
    this->_emailAddress = str;
    return ;
}

void Contact::setPhoneNumber(std::string str)
{
    this->_phoneNumber = str;
    return ;
}

void Contact::setBirthdayDate(std::string str)
{
    this->_birthdayDate = str;
    return ;
}

void Contact::setFavoriteMeal(std::string str)
{
    this->_favoriteMeal = str;
    return ;
}

void Contact::setUnderwearColor(std::string str)
{
    this->_underwearColor = str;
    return ;
}

void Contact::setDarkestSecret(std::string str)
{
    this->_darkestSecret = str;
    return ;
}
