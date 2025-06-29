/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 20:02:46 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/29 20:03:15 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	// create a FragTrap named "FT-01"
	FragTrap ft("FT-01");  // ClapTrap constructor, then FragTrap constructor

	// test inherited and unique actions:
	ft.attack("TargetA");      // uses ClapTrap::attack (inherited)
	ft.takeDamage(40);          // inherited; reduces HP by 40
	ft.beRepaired(20);          // inherited; consumes energy, restores 20 HP
	ft.highFivesGuys();         // FragTrap-specific ability

	// test copy constructor and destruction chaining:
	{
		FragTrap ftCopy = ft;  // copy constructor: ClapTrap copy, then FragTrap copy message
		ftCopy.highFivesGuys(); // ensure copy retains highFive ability
	} // ftCopy goes out of scope: FragTrap destructor, then ClapTrap destructor

	return 0;  // ft goes out of scope: destructors called in reverse order
}
