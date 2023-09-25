/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:02:17 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/25 18:21:54 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int c1;
    int c2;    
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        c1 = 1;
        while (argv[c1])
        {
            c2 = 0;
            while (argv[c1][c2])
            {
                std::cout << (char) std::toupper(argv[c1][c2]);
                c2++;
            }
            c1++;
        }
        std::cout << std::endl;
    }      
    return (0);
} 



