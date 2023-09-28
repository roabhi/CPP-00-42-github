/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:52:05 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/28 15:28:22 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook {

    public:

        Phonebook(void);
        ~Phonebook(void);
        void    addContact(void);
        Contact         contact_list[8];

    private:
		unsigned int	index;
        std::string     getInputContent(std::string str);        
};

#endif