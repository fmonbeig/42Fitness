/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exercices.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:27:42 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/06/29 10:33:17 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exercices.hpp"

/*
	a pair is made of one Exercice and is LVL on 10
*/

Exercices::Exercices()
{
	//ABS
	_abs.insert(std::pair<std::string, int>("Russian Twist",				10));
	_abs.insert(std::pair<std::string, int>("Boat hold",					10));
	_abs.insert(std::pair<std::string, int>("Mountain Climber",				7));
	_abs.insert(std::pair<std::string, int>("Mountain Climber Twist",		9));
	_abs.insert(std::pair<std::string, int>("V Hold",						8));
	_abs.insert(std::pair<std::string, int>("Reach up",						7));
	_abs.insert(std::pair<std::string, int>("Chair crunch",					6));
	_abs.insert(std::pair<std::string, int>("Laying Flutter",				5));
	_abs.insert(std::pair<std::string, int>("Seat In/Out",					5));
	_abs.insert(std::pair<std::string, int>("Classic Plank",				5));
	_abs.insert(std::pair<std::string, int>("Plank up & down",				8));
	_abs.insert(std::pair<std::string, int>("Plank twist",					7));
	_abs.insert(std::pair<std::string, int>("High Plank Touch shoulder",	7));
	_abs.insert(std::pair<std::string, int>("Side Plank",					5));
	_abs.insert(std::pair<std::string, int>("Side Plank up & down",			7));
	_abs.insert(std::pair<std::string, int>("Knee face",					5));

	//ARMS

	//LEGS

	//CARDIO

}

Exercices::~Exercices()
{}

Exercices::Exercices(Exercices const & other)
{ (void) other; }

Exercices & Exercices::operator=(Exercices & rhs)
{
	(void) rhs;
	return *this;
}

const std::map<std::string, int> & Exercices::getAbs() const
{ return _abs; }
