/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:47:37 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/24 10:48:42 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

// ClapTrap: simple robot with health, energy, and attack capabilities
class ClapTrap {
private:
	std::string name;			// name identifier
	unsigned int hitPoints;		// health (max: implementation-defined)
	unsigned int energyPoints;	// energy to perform actions
	unsigned int attackDamage;	// damage dealt on attack

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
