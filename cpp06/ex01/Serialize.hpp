/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:08:42 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/11/05 01:08:43 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include "iostream"
# include <stdint.h>

typedef struct s_Data
{
    void    *noRole;
}   Data;


class Serialize
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
    private:
        Serialize();
};

#endif