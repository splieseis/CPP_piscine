/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 23:46:45 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/21 23:52:35 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

const int MAX_CONTACTS = 8;
const int FIELD_WIDTH = 10;

class Contact {
public:
  Contact(void);
  ~Contract(void);
  void setFirstName(std::string);
  void setLastName(std::string);
  void setNickName(std::string);
  void setLogin(std::string); 
}
