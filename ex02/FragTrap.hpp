/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 19:56:26 by tmurua            #+#    #+#             */
/*   Updated: 2025/06/29 19:58:39 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

// FragTrap inherits from ClapTrap and adds high-five behavior
class FragTrap : public ClapTrap {
public:
	// constructor: initialize with specific values
	FragTrap(const std::string& name);

	// copy constructor
	FragTrap(const FragTrap& other);

	// copy assignment operator
	FragTrap& operator=(const FragTrap& other);

	// destructor
	~FragTrap();

	// unique FragTrap ability: request positive high-fives
	void highFivesGuys(void) const;
};

#endif
