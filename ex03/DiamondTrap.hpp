/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:49:46 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 18:48:59 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP
# include <iostream>
# include <new>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		    DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap& other);
			~DiamondTrap();

			void attack(const std::string& target);
			void guardGate();
			void whoAmI();
			void highFivesGuys();

};
#endif


