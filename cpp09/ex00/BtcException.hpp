/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BtcException.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:32:33 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/23 08:11:04 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTCEXCEPTION
#define BTCEXCEPTION

#include "iostream"

class Error :public std::exception
{
    std::string errfr; 
    public:
    const char *what() const throw();
    Error() throw();
    Error(const std::string &) throw();
    Error(const Error &) throw();
    Error& operator=(Error const &) throw();
    ~Error() throw();
};

#endif