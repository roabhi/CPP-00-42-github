/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:51:17 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/28 18:49:29 by rabril-h         ###   ########.fr       */
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

void    Phonebook::printContact(Contact contact)
{
 
    if (contact.getFirstName().size() > 10)
		std::cout << std::left << std::setw(9) << contact.getFirstName().substr(0, 9) << "." << "|";
	else
		std::cout << std::left << std::setw(10) << contact.getFirstName() << "|";
	if (contact.getLastName().size() > 10)
		std::cout << std::left << std::setw(9) << contact.getLastName().substr(0, 9) << "." << "|";
	else
		std::cout << std::left << std::setw(10) << contact.getLastName() << "|";
	if (contact.getNickName().size() > 10)
		std::cout << std::left << std::setw(9) << contact.getNickName().substr(0, 9) << "." << "#" << std::endl;
	else
		std::cout << std::left << std::setw(10) << contact.getNickName() << "#" << std::endl;
}

void    Phonebook::searchContact(void)
{
    unsigned int    counter;    
    std::string     input;
    int             search_index;

    counter = -1;
    if (contact_list[0].getFirstName().length() < 1)
    {
        std::cout << "There are no contacts. Please add some" << std::endl;
        std::cout << INFO_MSG << std::endl;
        return ;
    }

    std::cout << std::left << std::setw(10) << "# Index" << "|";
	std::cout << std::left << std::setw(10) << "First Name" << "|";
	std::cout << std::left << std::setw(10) << "Last Name" << "|";
	std::cout << std::left << std::setw(10) << "Nickname" << "#" << std::endl;

    while (++counter < 8)
    {
        if (contact_list[counter].getFirstName().length() > 0)
        {
            std::cout << "# ";
	        std::cout << std::left << std::setw(8) << std::left << (counter + 1) << "|";
            this->printContact(contact_list[counter]);
        }
    }

    std::cout << "\nEnter an index to see an specific contact.\n" << std::endl;
	
    std::cin >> search_index;
	search_index--;

    if (search_index < 0 || search_index > 7)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
        
    }
    else if (contact_list[search_index].getFirstName().length() < 1)
    {
        std::cout << "No entry for that index" << std::endl;
        return ;
      }
    else 
    {
        std::cout << "First Name: " << contact_list[search_index].getFirstName() << std::endl;
        std::cout << "Last Name: " << contact_list[search_index].getLastName() << std::endl;
        std::cout << "Nickname: " << contact_list[search_index].getNickName() << std::endl;
        std::cout << "Phone Number: " << contact_list[search_index].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << contact_list[search_index].getDarkestSecret() << std::endl;
        return;
    }
    
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
    this->contact_list[index].setPhoneNumber(this->getInputContent("Phone Number:"));
    this->contact_list[index].setDarkestSecret(this->getInputContent("Darkest Secret:"));

    // std::cout << "El nombre de la entrada es ";
    // std::cout << this->contact_list[index].getName() << std::endl;

    // ? If we are out of space reset index to first entry
    
    if (index + 1 > 7)
        index = 0;
    else
        index++;    
    
}