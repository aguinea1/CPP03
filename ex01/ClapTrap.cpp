/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:34:48 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 12:19:47 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string Name) : Name(Name), HitPoints(10), EnergyPoints(10), AttackDamage(10)
{
	std::cout << this->Name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& target)
 : Name(target.Name), HitPoints(target.HitPoints), EnergyPoints(target.EnergyPoints), AttackDamage(target.AttackDamage)
{
	std::cout << this->Name << " has been created" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << this->Name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints > 0 && EnergyPoints > 0)
	{
		EnergyPoints--;
		std::cout << "ClapTrap " << Name << " attacks doing " << AttackDamage << " points of damage to "<< target << std::endl;
	}
	else if (EnergyPoints <= 0)
		std::cout << "ClapTrap " << Name << " has no EnergyPoints" << std::endl;
	else
		std::cout << "ClapTrap " << Name << " has no HitPoints" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints > 0)
	{
		HitPoints -= amount;
		std::cout << "ClapTrap "<< Name<<" takes " << amount << " of HitPoints " << std::endl;
	}
	if (HitPoints <= 0)
	{
		HitPoints = 0;
		std::cout<< "ClapTrap " << Name << " has no HitPoints left"<<std::endl;
		return ;
	}
	std::cout << "ClapTrap "<< Name <<" has " << HitPoints << "HP left" << std::endl;
}
 void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoints > 0 && HitPoints > 0)
    {
        EnergyPoints--;
        HitPoints += amount;
        std::cout << "ClapTrap " << Name << " repairs itself for " << amount << " hit points. "
                  << "Current HP: " << HitPoints << ", EP: " << EnergyPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << Name << " has no energy or is destroyed and can't repair itself." << std::endl;
    }
}

