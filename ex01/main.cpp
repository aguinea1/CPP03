/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:05:51 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 12:07:46 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap robot("HOO");
    robot.attack("KEE");
    robot.takeDamage(4);
    robot.beRepaired(3);
    for (int i = 0; i < 10; ++i)
        robot.attack("KEE");
    robot.attack("KEE");
    robot.beRepaired(5);
    robot.takeDamage(100);
    robot.attack("KEE");
    return 0;
}
