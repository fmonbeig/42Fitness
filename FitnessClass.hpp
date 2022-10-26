/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FitnessClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:20:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/04/23 22:20:02 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FITNESSCLASS_HPP
#define FITNESSCLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "Exercices.hpp"

class FitnessClass
{
	private:
		Exercices _exercices;
		std::map<std::string, int> _absProgram;
		FitnessClass(FitnessClass const & other);
		FitnessClass & operator=(FitnessClass & rhs);
	public:
		FitnessClass();
		virtual ~FitnessClass();

		void createAbsProgram(int lvl);
		void printAbsProgram();


};

#endif

/* For each type of Exercices we can pass a number and the program
** will automatically realize an appropriate Course
** E.G fitness 50 40 30 ==> lvl 50 in abs / 40 in Cardio and 30 in legs

After each choice, I will delete the choice from the list
You can had a ponderation with time maybe
*/
