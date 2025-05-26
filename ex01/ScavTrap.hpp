/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:21:50 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 12:43:20 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP
# include <iostream>
# include <new>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		    ScavTrap(std::string name);
			ScavTrap(const ScavTrap& other);
			~ScavTrap();

			void attack(const std::string& target);
};
#endif

