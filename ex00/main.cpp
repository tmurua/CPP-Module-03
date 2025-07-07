/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:51:53 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/07 19:20:17 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct("CT-01");	// name = CT-01, HP=10, EP=10, AD=0(remains 0)

	ct.attack("TargetA");	// HP=10, EP->9; prints attack message
	ct.takeDamage(5);		// HP->5, EP=9; prints damage taken and remaining HP
	ct.beRepaired(3);		// HP->8, EP->8; prints repair amount and new HP
	ct.takeDamage(5);		// HP→3; prints damage taken and remaining HP
	ct.beRepaired(1);		// EP→7, HP→4; prints repair and new HP
	ct.beRepaired(1);		// EP→6, HP→5; prints repair and new HP
	ct.beRepaired(1);		// EP→5, HP→6; prints repair and new HP
	ct.beRepaired(1);		// EP→4, HP→7; prints repair and new HP
	ct.beRepaired(1);		// EP→3, HP→8; prints repair and new HP
	ct.beRepaired(1);		// EP→2, HP→9; prints repair and new HP
	ct.beRepaired(1);		// EP→1, HP→10; prints repair and new HP
	ct.beRepaired(1);		// EP→0, HP→11; prints repair and new HP
	ct.attack("TargetB");	// no energy points, cannot attack
	ct.beRepaired(5);		// cannot repair, no energy points

	return 0;
}
