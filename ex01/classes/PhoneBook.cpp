/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:51:17 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/26 23:05:05 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Agenda.h"

Phonebook::Phonebook(void)
{
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

void    Phonebook::addContact(void)
{
    std::cout << "index is ";
    std::cout << index << std::endl;
    
    // ? If we are out of space reset index to first entry
    
    if (index + 1 > 7)
        index = 0;
    else
        index++;    
    
}