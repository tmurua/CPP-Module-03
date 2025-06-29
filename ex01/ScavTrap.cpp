/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:23:52 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/29 19:29:21 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor: chain to ClapTrap(name), then re-initialize stats via protected setters
ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " constructed" << std::endl;
}

// Copy constructor: invoke base copy, then announce
ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other)
{
	std::cout << "ScavTrap " << getName() << " copy constructed" << std::endl;
}

// Copy assignment: use base assignment and announce
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "ScavTrap " << getName() << " copy assigned" << std::endl;
	return *this;
}

// Destructor: announce destruction
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " destroyed" << std::endl;
}

// Override attack() with ScavTrap-specific message and logic
void ScavTrap::attack(const std::string& target)
{
	if (getHitPoints() == 0) {
		std::cout << "ScavTrap " << getName()
				<< " has no hit points and cannot attack!" << std::endl;
		return;
	}
	if (getEnergyPoints() == 0) {
		std::cout << "ScavTrap " << getName()
				<< " has no energy points and cannot attack!" << std::endl;
		return;
	}
	// spend 1 energy point
	setEnergyPoints(getEnergyPoints() - 1);

	std::cout << "ScavTrap " << getName()
			<< " attacks " << target
			<< ", causing " << getAttackDamage()
			<< " points of damage!" << std::endl;
}

// ScavTrap-only ability
void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << getName()
			<< " is now in Gate keeper mode" << std::endl;
}
