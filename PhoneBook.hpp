/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:03:19 by abasarud          #+#    #+#             */
/*   Updated: 2022/12/27 13:04:33 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string> 
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        virtual ~PhoneBook();

        void run_program();
        void add_contact();
        void search_contact();
        void show_header();
    private:
        Contact contact[8];
        int amount;
};

#endif