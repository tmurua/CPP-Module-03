/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:49:35 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/24 10:50:58 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& _name)
	: name(_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructed\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " has no hit points and cannot attack!\n";
		return;
	}
	if (energyPoints == 0) {
		std::cout << "ClapTrap " << name << " has no energy points and cannot attack!\n";
		return;
	}
	--energyPoints;
	std::cout << "ClapTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage = (amount >= hitPoints ? hitPoints : amount);
	hitPoints -= damage;
	std::cout << "ClapTrap " << name << " takes " << damage
			<< " points of damage, " << hitPoints << " HP remaining.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " is destroyed and cannot be repaired!\n";
		return;
	}
	if (energyPoints == 0) {
		std::cout << "ClapTrap " << name << " has no energy points and cannot repair!\n";
		return;
	}
	--energyPoints;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repairs for " << amount
			<< " points, " << hitPoints << " HP now.\n";
}
