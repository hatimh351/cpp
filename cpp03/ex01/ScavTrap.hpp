/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:59:24 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/26 14:08:22 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
    // constructors
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &);
        ScavTrap & operator = (const ScavTrap &);
        ScavTrap(const std::string&);
        ~ScavTrap();
        void    attack(const std::string &target);
        void    guardGate();
        // ScavTrap    &operator=(const ScavTrap &);
};

#endif