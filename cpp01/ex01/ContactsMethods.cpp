#include "PhoneBook.hpp"

Contact::Contact()
{
    this->_firstName = "";
    this->_lasttName = "";
    this->_nickName = "";
    this->_phoneNumber = "";
    this->_darkestSecret = "";
    this->_index = -1;
}

std::string Contact::get_firstName()
{
    return (this->_firstName);
}

std::string Contact::get_lastName()
{
    return (this->_lasttName);
}

std::string Contact::get_nickName()
{
    return (this->_nickName);
}

std::string Contact::get_phoneNumber()
{
    return (this->_phoneNumber);
}
void    Contact::set_firstName(std::string str)
{
    this->_firstName = str;
}

void    Contact::set_lastName(std::string str)
{
    this->_lasttName = str;
}

void    Contact::set_nickName(std::string str)
{
    this->_nickName = str;
}

void    Contact::set_phoneNumber(std::string str)
{
    this->_phoneNumber = str;
}

void    Contact::set_darkestSecret(std::string str)
{
    this->_darkestSecret = str;
}
