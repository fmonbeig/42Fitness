/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 20:52:11 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/04/23 21:28:16 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FitnessClass.hpp"

int main(int argc, char **argv)
{
	FitnessClass fitnessClass;

	if (argc == 2) //rajouter des limit en terme de lvl sinon segfault
	{
		fitnessClass.createAbsProgram(atoi(argv[1]));
		fitnessClass.printAbsProgram();
	}
	return(0);
}
