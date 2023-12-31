/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:03:58 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/22 12:05:08 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{
    private:
        int64_t _bufr;
    static const int sizeFractionalBits;

    public:
    static  Fixed &min(Fixed&, Fixed&);
    static  const Fixed &min(const Fixed&, const Fixed&);
    static  Fixed &max(Fixed&, Fixed&);
    static  const Fixed &max(const Fixed&, const Fixed&);
        Fixed();
        Fixed(const Fixed &obj);
        Fixed   &operator = (const Fixed &obj);
        ~Fixed();
        
        Fixed(const int);
        Fixed(const float);
        
        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawbits(int const raw);
        // operator oveloading
            // comparision operators
                bool    operator > (const Fixed &obj) const;
                bool    operator >= (const Fixed &obj) const;;
                bool    operator < (const Fixed &obj) const;
                bool    operator<=(const Fixed &obj) const;
                bool    operator == (const Fixed &obj) const;
                bool    operator != (const Fixed &obj) const;
            // arithmetic operators
                Fixed   operator +(const Fixed &obj);
                Fixed   operator -(const Fixed &obj);
                Fixed   operator *(const Fixed &obj);
                Fixed   operator /(const Fixed &obj);
            // increment decrement operators
                Fixed   &operator ++(void);
                Fixed   operator ++(int);
                Fixed   &operator --(void);
                Fixed   operator --(int);

};

std::ostream &operator<<(std::ostream &stream, const Fixed &obj);
#endif