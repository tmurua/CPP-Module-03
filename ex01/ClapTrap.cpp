/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:49:35 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/29 19:40:15 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Protected setters and getters implementations
void ClapTrap::setHitPoints(unsigned int hp)
{
	hitPoints = hp;
}
void ClapTrap::setEnergyPoints(unsigned int ep)
{
	energyPoints = ep;
}
void ClapTrap::setAttackDamage(unsigned int ad)
{
	attackDamage = ad;
}
unsigned int ClapTrap::getHitPoints() const
{
	return (hitPoints);
}
unsigned int ClapTrap::getEnergyPoints() const
{
	return (energyPoints);
}
unsigned int ClapTrap::getAttackDamage() const
{
	return (attackDamage);
}
const std::string &ClapTrap::getName() const
{
	return (name);
}

// Constructor: initializes name and default attribute values
ClapTrap::ClapTrap(const std::string &_name) : name(_name), hitPoints(10),
	energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

// Destructor: announces destruction
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

// Attack function: spends 1 energy point to damage target
void ClapTrap::attack(const std::string &target)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name
			<< " has no hit points and cannot attack!" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name
			<< " has no energy points and cannot attack!" << std::endl;
		return ;
	}
	--energyPoints;
	std::cout << "ClapTrap " << name << " attacks " << target
		<< ",causing " << attackDamage << " points of damage!" << std::endl;
}

// takeDamage: reduce hitPoints by amount (not below zero)
void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage;

	damage = (amount >= hitPoints ? hitPoints : amount);
	hitPoints -= damage;
	std::cout << "ClapTrap " << name << " takes " << damage
		<< " points of damage, " << hitPoints << " HP remaining." << std::endl;
}

// beRepaired: spends 1 energy point to restore hitPoints by amount
void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name
			<< " is destroyed and cannot be repaired!" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name
			<< " has no energy points and cannot repair!" << std::endl;
		return ;
	}
	--energyPoints;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repairs for " << amount
		<< " points," << hitPoints << " HP now." << std::endl;
}
