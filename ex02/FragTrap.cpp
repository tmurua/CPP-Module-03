/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 20:00:13 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/29 20:00:54 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// constructor: chain to ClapTrap(name), then re-initialize stats
FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " constructed" << std::endl;
}

// copy constructor: invoke base copy, then announce
FragTrap::FragTrap(const FragTrap& other)
	: ClapTrap(other)
{
	std::cout << "FragTrap " << getName() << " copy constructed" << std::endl;
}

// copy assignment: use base assignment and announce
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "FragTrap " << getName() << " copy assigned" << std::endl;
	return *this;
}

// destructor: announce destruction
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " destroyed" << std::endl;
}

// high-five ability
void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << getName() << " requests a high five! ✋" << std::endl;
}
