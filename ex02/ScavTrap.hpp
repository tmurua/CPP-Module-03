/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:21:04 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/29 18:22:13 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

// ScavTrap inherits from ClapTrap and adds gate-keeping behavior
class ScavTrap : public ClapTrap
{
public:
	// constructor: initialize with specific values
	ScavTrap(const std::string& name);

	// copy constructor
	ScavTrap(const ScavTrap& other);

	// copy assignment operator
	ScavTrap& operator=(const ScavTrap& other);

	// destructor
	~ScavTrap();

	// override attack: prints ScavTrap-specific message
	void attack(const std::string& target);

	// unique to ScavTrap: enter guard mode
	void guardGate() const;
};

#endif
