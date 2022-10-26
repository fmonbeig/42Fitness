/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FitnessClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:27:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/06/29 10:36:33 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FitnessClass.hpp"

FitnessClass::FitnessClass()
{
	srand (time(NULL));
}

FitnessClass::~FitnessClass()
{}

FitnessClass::FitnessClass(FitnessClass const & other)
{ (void) other; }

FitnessClass & FitnessClass::operator=(FitnessClass & rhs)
{
	(void) rhs;
	return *this;
}

void	FitnessClass::createAbsProgram(int lvl)
{
	int							i;
	int							j;
	int							total;
	std::map<std::string, int>	absList;

	absList= _exercices.getAbs();
	total = 0;
	while (total <= lvl)
	{
		i = rand() % absList.size();
		j = 0;
		for(std::map<std::string, int>::iterator it = absList.begin(); it != absList.end(); it++)
		{
			if (j == i)
			{
				total += it->second;
				_absProgram.insert(*it);
				absList.erase(it);
				break;
			}
			j++;
		}
	}
}

void FitnessClass::printAbsProgram()
{
	int	ret;

	ret = 0;
	std::cout << "\n______________\e[1;33mABDOS\e[0m_______________\n";
	for(std::map<std::string, int>::iterator it = _absProgram.begin(); it != _absProgram.end(); it++)
	{
		std::cout << std::left << std::setw(27);
		std::cout << it->first << " | ";
		std::cout << std::left << std::setw(5);
		std::cout << it->second << std::endl;
		ret += it->second;
	}
	std::cout << "\e[1;37m" <<std::left <<std::setw(27);
	std::cout << "TOTAL " << " | ";
	std::cout << std::left << std::setw(5);
	std::cout << ret << "\e[0m" << std::endl;
	std::cout << "___________________________________\n";
}

// acces to a pair in a map --> it-> first  it->second



