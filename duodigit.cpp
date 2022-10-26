/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duodigit.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:43:56 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/06/04 17:44:59 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
  "Duodigit"
  Write a function that checks if a given number is comprised of up to two digits
  examples of duodigits:    11, 21, 121, 2020, 2022, 1000000
  these are not duodigits:  132, 2021, 1987 etc

  bool isDuodigit(int x){
      ...
  }
 */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

bool isDuodigit(int x)
{
  int i = 1;
  // Transform an int into a string with to_string
  std::string temp = std::to_string(x);

  //check the size of the int (if < 2 it's less than 2 digit)
  if (temp.size() > 2)
  {
    while (temp[++i])
    {
      if (temp[i] != temp[0] && temp[i] != temp[1])
        return 0;
    }
  }
	return 1;

}

int main(){

std::cout << isDuodigit(200202102) << std::endl;

}
