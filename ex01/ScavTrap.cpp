/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:43:29 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 12:48:58 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name)
{
	Name = Name;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "Hi I'm " << this->Name << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other)
	: Name(target.Name), HitPoints(target.HitPoints), EnergyPoints(target.EnergyPoints), AttackDamage(target.AttackDamage)
{
	std::cout << "Hi I'm "<< this->Name << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << this->Name << " BYE!!" << std::endl;
}
