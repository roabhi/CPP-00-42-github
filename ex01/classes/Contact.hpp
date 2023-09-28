/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:04:04 by rabril-h          #+#    #+#             */
/*   Updated: 2023/09/28 15:24:48 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {
    
    public:
        Contact(void);
        ~Contact(void);
        // void    addEntry(Contact *contact);
        void        setFirstName(std::string str);
        std::string getFirstName(void);
        void        setLastName(std::string str);
        std::string getLastName(void);
        void        setNickName(std::string str);
        std::string getNickName(void);
        void        setPhoneNumber(std::string str);
        std::string getPhoneNumber(void);
        void        setDarkestSecret(std::string str);
        std::string getDarkestSecret(void);

    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

        
};

#endif

