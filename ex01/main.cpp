/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:58:46 by rabril-h          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/09/27 20:37:11 by rabril-h         ###   ########.fr       */
=======
/*   Updated: 2023/09/28 18:47:58 by rabril-h         ###   ########.fr       */
>>>>>>> c8776f216c8a77b5f44ead80ea2efb587b4152c6
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

int main(int argc, char *argv[])
{
    std::string input;
    int         i;
    Phonebook   phonebook;
<<<<<<< HEAD
    Contact     contact;
=======
    // Contact     contact;
>>>>>>> c8776f216c8a77b5f44ead80ea2efb587b4152c6

    input = " ";
    i = -1;
    (void)argv;
<<<<<<< HEAD
=======
    
>>>>>>> c8776f216c8a77b5f44ead80ea2efb587b4152c6

    if(argc != 1)
        return (0);
    std::cout << WELCOME_MSG << std::endl;
    std::cout << INFO_MSG << std::endl;
<<<<<<< HEAD
    while (1)
    {
=======
    while (1)    {
        
>>>>>>> c8776f216c8a77b5f44ead80ea2efb587b4152c6
        std::cout << "-> ";
        if (!std::getline(std::cin, input))
			return (1);
        while (input[++i])
			input[i] = std::toupper(input[i]);
        i = -1;
        if (input == "EXIT")
            return (0);
<<<<<<< HEAD
        else if (input == "ADD") 
            phonebook.addContact(contact);
        else if (input == "SEARCH")
             std::cout << "search for a contact here" << std::endl;
        else
        {
            std::cout << ERROR_MSG << std::endl; 
            std::cout << INFO_MSG << std::endl;        
        }
=======
        else if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
             phonebook.searchContact();
       
        // else
        // {
        //     std::cout << ERROR_MSG << std::endl; 
        //     std::cout << INFO_MSG << std::endl;        
        // }
>>>>>>> c8776f216c8a77b5f44ead80ea2efb587b4152c6
    }   
    return (0);
}