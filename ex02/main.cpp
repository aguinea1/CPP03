/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:05:51 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 15:45:22 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap bot("Carlota");
	bot.attack("Fran");
	bot.takeDamage(30);
    bot.beRepaired(20);
    bot.highFivesGuys();
    return 0;
}
