/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 11:09:45 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/22 17:23:57 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>
#include "contact.class.hpp"

static void printCorrectLength(std::string str)
{
    int width;

    width = 0;
    if (str.size() <= FIELD_WIDTH)
    {
      while (str.size() + width < FIELD_WIDTH)
      {
        std::cout << " ";
        width++;
      }
      std::cout << str;
    }
    else
    {
      while(width + 1 < FIELD_WIDTH)
      {
        std::cout << str[width];
        width++;
      }
      std::cout << ".";
    }
}

static void showPhonebook(Contact phonebook[])
{
  int index;

  index = 0;
  std::cout << "     Index|" << "First Name|" << " Last Name|" << "  Nickname" << std::endl;
  while (index < MAX_CONTACTS)
  {
    if (phonebook[index].getFirstName().size() > 0)
      {
        std::cout << "         " << index;
        std::cout << "|";
        printCorrectLength(phonebook[index].getFirstName());
        std::cout << "|";
        printCorrectLength(phonebook[index].getLastName());
        std::cout << "|";
        printCorrectLength(phonebook[index].getNickName());
        std::cout << std::endl;
      }
    index++;
  }
}

static void showDeatails(Contact contact, int index)
{
  std::cout << std::endl << "Details of index: " << index << std::endl;
  std::cout << "First Name: " << contact.getFirstName() << std::endl;
  std::cout << "Last Name: " << contact.getLastName() << std::endl;
  std::cout << "Nickname: " << contact.getNickName() << std::endl;
  std::cout << "Login: " << contact.getLogin() << std::endl;
  std::cout << "Postal Address: " << contact.getPostalAddress() << std::endl;
  std::cout << "Email Address: " << contact.getEmailAddress() << std::endl;
  std::cout << "Phonenumber: " << contact.getPhoneNumber() << std::endl;
  std::cout << "Birthday Date: " << contact.getBirthdayDate() << std::endl;
  std::cout << "Favorite Meal: " << contact.getFavoriteMeal() << std::endl;
  std::cout << "Underwear Color: " << contact.getUnderwearColor() << std::endl;
  std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

static void search(Contact phonebook[], int entries)
{
    int index;

    showPhonebook(phonebook);
    std::cout << "Which Contact Number do you want to see full details of? ";
    std::cin >> index;
    if (std::cin.good() && (index >= 0 && index < entries))
      showDeatails(phonebook[index], index);
    else
    {
      std::cin.clear();
      std::cout << std::endl << "Please SEARCH again and enter a valid index number!" << std::endl;
    }
}

static Contact addContact(void)
{
  Contact newContact;
  std::string buff;

  std::cout << "First Name: ";
  std::cin >> buff;
  newContact.setFirstName(buff);
  std::cout << "Last Name: ";
  std::cin >> buff;
  newContact.setLastName(buff);
  std::cout << "Nickname: ";
  std::cin >> buff;
  newContact.setNickName(buff);
  std::cout << "Login: ";
  std::cin >> buff;
  newContact.setLogin(buff);
  std::cout << "Postal Address: ";
  std::cin >> buff;
  newContact.setPostalAddress(buff);
  std::cout << "Email Address: ";
  std::cin >> buff;
  newContact.setEmailAddress(buff);
  std::cout << "Phone Number: ";
  std::cin >> buff;
  newContact.setPhoneNumber(buff);
  std::cout << "Birthday Date: ";
  std::cin >> buff;
  newContact.setBirthdayDate(buff);
  std::cout << "Favorite Meal: ";
  std::cin >> buff;
  newContact.setFavoriteMeal(buff);
  std::cout << "Underwear Color: ";
  std::cin >> buff;
  newContact.setUnderwearColor(buff);
  std::cout << "Darkest Secret: ";
  std::cin >> buff;
  newContact.setDarkestSecret(buff);
  std::cout << "New contact created!" << std::endl;
  return (newContact);
}

int main(void)
{
  int index;
  Contact phonebook[MAX_CONTACTS];
  std::string command;

  std::cout << "WELCOME to your awesome Phonebook!" << std::endl;
  std::cout << "You can use the following commands: ADD, SEARCH, EXIT!" << std::endl;
  std::cout << "You can store up to 8 contacts for free!" << std::endl;
  std::cout << "You can purchase additional space for 1$/10 contacts!" << std::endl;
  index = 0;
  while (1)
  {
    std::cin >> command;
    if (command == "ADD")
    {
      if (index < MAX_CONTACTS)
        phonebook[index++] = addContact();
      else
        std::cout << "Your phonebook is full! Purchase more space!" << std::endl;
    }
    else if (command == "SEARCH")
    {
      if (index > 0)
        search(phonebook, index);
      else
        std::cout << "Your phonebook is empty. Please ADD contacts before you SEARCH!" << std::endl;
    }
    else if (command == "EXIT")
      break;
  }
  return (0);
}
