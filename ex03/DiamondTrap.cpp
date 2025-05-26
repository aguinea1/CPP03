/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:53:51 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 18:51:24 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other.name + "_clap_name"),  FragTrap(other), ScavTrap(other), name(other.name)
{
	std::cout << "DiamondTrap copy " << name << " appeared" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name)
{
	HitPoints = FragTrap::HitPoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << name << " appeared" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " disappeared" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::Name << std::endl;
}

void DiamondTrap::guardGate()
{
    ScavTrap::guardGate();
}

void DiamondTrap::highFivesGuys()
{
    FragTrap::highFivesGuys();
}

