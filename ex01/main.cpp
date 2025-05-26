/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:05:51 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 15:30:38 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include "ScavTrap.hpp"

int main()
{
	ScavTrap bot("JON");
	bot.attack("LUCAS");
	bot.takeDamage(30);
    bot.beRepaired(20);
    bot.guardGate();
    return 0;
}
