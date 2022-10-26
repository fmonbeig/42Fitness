/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exercices.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:24:55 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/04/23 20:56:04 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXERCICES_HPP
#define EXERCICES_HPP

#include <iostream>
#include <string>
#include <map>

class Exercices
{
	private:
		std::map<std::string, int> _abs;
		Exercices(Exercices const & other);
		Exercices & operator=(Exercices & rhs);
	public:
		Exercices();
		virtual ~Exercices();

		//GETTER
		const std::map<std::string, int> & getAbs() const;

};

#endif

/* EXERCICES
Each Exercices have a name and a difficulty value on ten
*/
