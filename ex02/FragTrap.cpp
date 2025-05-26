/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:38:16 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 15:46:06 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap " << this->Name << " has born" << std::endl;
}
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap " << this->Name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< this->Name << " DIED!!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (HitPoints > 0 && EnergyPoints > 0)
	{
		EnergyPoints--;
		std::cout << "FRagTrap " << Name << " attacks causing " << AttackDamage << " points of damage to "<< target << std::endl;
	}
	else if (EnergyPoints <= 0)
		std::cout << "FragTrap " << Name << " has no EnergyPoints" << std::endl;
	else
		std::cout << "FragTrap " << Name << " has no HitPoints" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << Name << " requests a high five!!! " << std::endl;
}

