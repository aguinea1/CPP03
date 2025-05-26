/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:43:29 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 15:32:14 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap " << "Hi I'm " << this->Name << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << "Hi I'm "<< this->Name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< this->Name << " BYE!!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (HitPoints > 0 && EnergyPoints > 0)
	{
		EnergyPoints--;
		std::cout << "ScavTrap " << Name << " attacks causing " << AttackDamage << " points of damage to "<< target << std::endl;
	}
	else if (EnergyPoints <= 0)
		std::cout << "ScavTrap " << Name << " has no EnergyPoints" << std::endl;
	else
		std::cout << "ScavTrap " << Name << " has no HitPoints" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode!" << std::endl;
}
