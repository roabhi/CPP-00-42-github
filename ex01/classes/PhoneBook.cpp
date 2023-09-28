/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:51:17 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/28 15:32:11 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Agenda.h"

Phonebook::Phonebook(void)
{
    index = 0;
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

std::string Phonebook::getInputContent(std::string str)
{
    std::string	input;
    unsigned int         counter;    

	while (input.length() < 1)
	{
		input.erase();
		std::cout << std::setw(str.length() + 1) << std::left << str;
		if (!std::getline(std::cin, input))
			break ;
        if (str == "Phone Number:")
        {
            counter = -1;            
            while(++counter < input.length())
            {
                if (input[counter] < '0' || input[counter] > '9')
                {
                    std::cout << "This field only accepts numbers without spaces" << std::endl;
                    input.erase();
                }
            }
        }
	}
	return (input);
}



void    Phonebook::addContact(void)
{
    // std::cout << "index is ";
    // std::cout << index << std::endl;

    std::string input;
	std::string buff;

    //TODO Warn user about overwritting entrys when index + 1 is 9

    this->contact_list[index].setFirstName(this->getInputContent("First Name:"));
    this->contact_list[index].setLastName(this->getInputContent("Last Name:"));
    this->contact_list[index].setNickName(this->getInputContent("Nick Name:"));
    this->contact_list[index].setNickName(this->getInputContent("Phone Number:"));
    this->contact_list[index].setNickName(this->getInputContent("Darkest Secret:"));

    // std::cout << "El nombre de la entrada es ";
    // std::cout << this->contact_list[index].getName() << std::endl;

    // ? If we are out of space reset index to first entry
    
    if (index + 1 > 7)
        index = 0;
    else
        index++;    
    
}