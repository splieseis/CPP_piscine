/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:25:35 by spliesei          #+#    #+#             */
/*   Updated: 2019/01/21 19:45:29 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

void megaphone(int argc, char **str)
{
  int i;
  int j;

  i = 1;
  while (i < argc)
  {
    j = 0;
    while (str[i][j])
      {
        std::cout << (char)std::toupper(str[i][j]);
        j++;
      }
    i++;
  }
}

int main(int argc, char **argv)
{
  if (argc > 1)
    megaphone(argc, argv);
  else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  std::cout << std::endl;
  return 0;
}
