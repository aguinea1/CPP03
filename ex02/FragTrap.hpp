/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:36:18 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/26 15:44:11 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP
# include <iostream>
# include <new>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		    FragTrap(std::string name);
			FragTrap(const FragTrap& other);
			~FragTrap();

			void attack(const std::string& target);
			void highFivesGuys();
};
#endif

