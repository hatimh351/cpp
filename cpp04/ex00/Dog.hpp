/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:27:33 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/31 15:59:19 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"

class   Dog : public Animal
{
    public:
    // Orthodox canonical class form
        Dog();
        Dog(const Dog &);
        Dog &operator =(const Dog&);
        ~Dog();
    // action
        void    makeSound() const;
};

#endif