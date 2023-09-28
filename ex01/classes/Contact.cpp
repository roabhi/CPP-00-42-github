/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:05:05 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/28 17:32:45 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Agenda.h"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{   
    return;
}

// ? Public functions

void    Contact::setFirstName(std::string str)
{
    this->firstName = str;
}

std::string Contact::getFirstName(void)
{
    return this->firstName;
}

void    Contact::setLastName(std::string str)
{
    this->lastName = str;
}

std::string Contact::getLastName(void)
{
    return this->lastName;
}

void    Contact::setNickName(std::string str)
{
    this->nickName = str;
}

std::string Contact::getNickName(void)
{
    return this->nickName;
}

void    Contact::setPhoneNumber(std::string str)
{
    this->phoneNumber = str;
}

std::string Contact::getPhoneNumber(void)
{
    return this->phoneNumber;
}

void    Contact::setDarkestSecret(std::string str)
{
    this->darkestSecret = str;
}

std::string Contact::getDarkestSecret(void)
{
    return this->darkestSecret;
}

// void    Contact::addEntry(Contact *contact)
// {

// }