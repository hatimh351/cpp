/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:39:01 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/22 03:38:03 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include "iostream"

class Weapon
{
    std::string _type;

    public:
        Weapon(std::string);
        const std::string &getType() const;
        void  setType(std::string);
};

#endif