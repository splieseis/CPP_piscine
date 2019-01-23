/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:47:16 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/23 21:54:20 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony
{
public:
  Pony(void);
  ~Pony(void);
  void        setName(std::string);
  void        setType(std::string);
  void        setColor(std::string);
  std::string getName(void);
  std::string getType(void);
  std::string getColor(void);

private:
  std::string _name;
  std::string _type;
  std::string _color;
};

#endif
