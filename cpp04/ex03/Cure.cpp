/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:49:12 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 16:03:01 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// **********************************************
// *************    Constructors ****************
// **********************************************

Cure::Cure() : AMateria("Cure")
{
    
}

Cure::Cure(const Cure &obj)
{
    _type = obj._type;
}

Cure &Cure::operator= (const Cure &obj)
{
    _type = obj._type;
    return (*this);
}

// **********************************************
// *************    Destructors  ****************
// **********************************************

Cure::~Cure() {}

// **********************************************
// *************    Actions      ****************
// **********************************************

AMateria    *Cure::clone() const
{
    Cure    *ptr;

    ptr = new Cure();
    return (ptr);
}

void    Cure::use(ICharacter &target)
{
    std::cout << "Cure: " << "\"* heals " << target.getName() << "'s wounds *\"" << std::endl;
}