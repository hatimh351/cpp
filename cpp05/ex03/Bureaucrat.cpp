/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:28:44 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/20 22:45:13 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

GTH Bureaucrat::GradeTooHighException;
GTL Bureaucrat::GradeTooLowException;
DataTypeError Bureaucrat::DataTypeError;

// **********************************************
// **********************************************
// **********     Constructors    ***************
// **********************************************
// **********************************************

Bureaucrat::Bureaucrat() : _name("X"), _grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj.getName()), _grade(obj._grade)
{
}

Bureaucrat::Bureaucrat(const std::string &name, const std::string &grade) : _name(name)
{
    _grade = validGrad(grade);
    if (_grade == -1)
        throw Bureaucrat::DataTypeError;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException;
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException;
}



// **********************************************
// **********************************************
// ******   Checking the Grade         **********
// **********************************************
// **********************************************

int Bureaucrat::validGrad(const std::string & grade)
{
    const char *ptr = grade.c_str();
    size_t  i;
    int     ret = 0;

    i = 0;
    while (ptr[i] == ' ' && ptr[i])
        i++;
    if (ptr[i] == '-')
        return (-1);
    while (isdigit(ptr[i]) && ptr[i])
    {
        if (ret > 150)
            return (-1);
        ret = ret * 10 + ptr[i] - '0';
        i++;
    }
    while (ptr[i])
    {
        if (!isdigit(ptr[i]))
            return (-1);
        i++;
    }
    return (ret);
}

// **********************************************
// **********************************************
// ******     seter                    **********
// **********************************************
// **********************************************
int Bureaucrat::getGrade() const
{
    return (_grade);
}

const std::string &Bureaucrat::getName() const
{
    return (_name);
}



// **********************************************
// **********************************************
// ***********    Destructor           **********
// **********************************************
// **********************************************

Bureaucrat::~Bureaucrat()
{

}

// **********************************************
// **********************************************
// ********   operator overloading    ***********
// **********************************************
// **********************************************

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (out);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->_grade = obj.getGrade();
    return (*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
    Bureaucrat tmp(*this);
    this->increment();

    return (tmp);
}

Bureaucrat Bureaucrat::operator--(int)
{
    Bureaucrat tmp(*this);
    this->decrement();
    return (tmp);
}

// **********************************************
// **********************************************
// ************         Actions       ***********
// **********************************************
// **********************************************

void    Bureaucrat::decrement()
{
    this->_grade++;
    if (_grade > 150)
        throw Bureaucrat::GradeTooHighException;
}

void    Bureaucrat::increment()
{
    this->_grade--;
    if (_grade < 1)
        throw Bureaucrat::GradeTooLowException;
}

void Bureaucrat::signForm(const AForm &frm) const
{
    if (frm.getGradeRToSigned() >= this->getGrade())
        std::cout << *this  << " signed " << frm.getName() << std::endl;
    else
        std::cout << *this << " couldn't signed " << frm.getName() << " beacause his grade is too low "<< std::endl;
}


void    Bureaucrat::executeForm(AForm const &form) const
{
    if (this->getGrade() <= form.getGradeRToExecute())
        std::cout << *this << " excuted " << form << std::endl;
    else
        std::cout << *this << "can't excute this form" << std::endl;
}