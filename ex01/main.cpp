/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 19:31:04 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/29 19:31:06 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	// test construction and chaining
	ScavTrap st("ST-01");

	// test inherited actions
	st.attack("TargetA");   // uses ScavTrap attack
	st.takeDamage(30);        // inherited
	st.beRepaired(20);        // inherited
	st.guardGate();           // ScavTrap-specific

	// test copy semantics and destruction chaining
	{
		ScavTrap st2 = st;    // copy constructor
		st2.guardGate();      // ensure guarding works on copies
	} // st2 out of scope: destructor calls for ScavTrap then ClapTrap

	return 0;
}
