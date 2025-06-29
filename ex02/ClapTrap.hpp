/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:47:37 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/29 19:28:35 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

// ClapTrap: simple robot with health, energy, and attack capabilities
class ClapTrap {
private:
	std::string      name;
	unsigned int     hitPoints;
	unsigned int     energyPoints;
	unsigned int     attackDamage;

protected:
	// allow derived classes to adjust the stats:
	void   setHitPoints(unsigned int hp);
	void   setEnergyPoints(unsigned int ep);
	void   setAttackDamage(unsigned int ad);
	unsigned int getHitPoints()   const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;
	const std::string& getName()  const;

public:
	// constructor: initializes name and default attribute values
	ClapTrap(const std::string& _name);

	// destructor: announces destruction
	~ClapTrap();

	// attack function: spends 1 energy point to damage target
	void attack(const std::string& target);

	// takeDamage: reduce hitPoints by amount (not below zero)
	void takeDamage(unsigned int amount);

	// beRepaired: spends 1 energy point to restore hitPoints by amount
	void beRepaired(unsigned int amount);
};

#endif
