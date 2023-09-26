/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agenda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:58:46 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/26 22:42:54 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.h"

int main(int argc, char *argv[])
{
    std::string input;
    int         i;
    Phonebook   phonebook;

    input = " ";
    i = -1;
    (void)argv;

    if(argc != 1)
        return (0);
    std::cout << WELCOME_MSG << std::endl;
    std::cout << INFO_MSG << std::endl;
    while (1)
    {
        std::cout << "-> ";
        if (!std::getline(std::cin, input))
			return (1);
        while (input[++i])
			input[i] = std::toupper(input[i]);
        i = -1;
        if (input == "EXIT")
            return (0);
        else if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
             std::cout << "search for a contact here" << std::endl;
        else
        {
            std::cout << ERROR_MSG << std::endl; 
            std::cout << INFO_MSG << std::endl;        
        }
    }   
    return (0);
}