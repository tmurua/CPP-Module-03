/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:47:37 by tmurua            #+#    #+#             */
/*   Updated: 2025/07/07 19:01:23 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

// ClapTrap: simple robot with health, energy, and attack capabilities
class ClapTrap
{
private:
	std::string		name;			// robot's id
	unsigned int	hitPoints;		// current health (never negative)
	unsigned int	energyPoints;	// resource to perform actions (never negative)
	unsigned int	attackDamage;	// damage dealt per attack

protected:
	// protected setters/getters; allow subclasses (ScavTrap, FragTrap) to adjust
	// base class's private members; because they're protected, they're "invisible"
	// to outside code, but available to derived classes
	void				setHitPoints(unsigned int hp);
	void				setEnergyPoints(unsigned int ep);
	void				setAttackDamage(unsigned int ad);
	unsigned int		getHitPoints()   const;
	unsigned int		getEnergyPoints() const;
	unsigned int		getAttackDamage() const;
	const std::string&	getName()  const;

public:
	// default constructor: initializes name and default attribute values
	ClapTrap(const std::string& _name);

	// copy constructor: implements deep copy of another ClapTrap's state
	ClapTrap(const ClapTrap& other);

	// copy assignment operator: assigns one existing ClapTrap into another (a = b;)
	ClapTrap& operator=(const ClapTrap& other);

	// destructor: announces destruction
	~ClapTrap();

	// attack function: spends 1 energy point to damage target
	void	attack(const std::string& target);

	// takeDamage: reduce hitPoints by amount (not below zero)
	void	takeDamage(unsigned int amount);

	// beRepaired: spends 1 energy point to restore hitPoints by amount
	void	beRepaired(unsigned int amount);
};

#endif
