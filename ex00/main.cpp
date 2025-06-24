/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:51:53 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/24 10:52:39 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap ct("CT-01");

	ct.attack("TargetA");	// consumes energy, deals 0 damage
	ct.takeDamage(5);		// HP reduces to 5
	ct.beRepaired(3);		// consumes energy, HP increases to 8
	ct.takeDamage(10);		// HP drops to 0
	ct.attack("TargetB");	// no HP, cannot attack
	ct.beRepaired(5);		// cannot repair when destroyed

	return 0;
}
