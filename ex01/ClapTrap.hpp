/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:28:09 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 15:22:04 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP
# include <iostream>
# include <new>
# include <string>

class ClapTrap
{
	protected:
		std::string Name;
		int	HitPoints;
		int EnergyPoints;
		int AttackDamage;
	public:
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap& target);
		~ClapTrap();
		 void attack(const std::string& target);
		 void takeDamage(unsigned int amount);
		 void beRepaired(unsigned int amount);
};
#endif
