/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:47:38 by abasarud          #+#    #+#             */
/*   Updated: 2022/12/27 15:47:41 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
    private:
        int i;
        static std::string field[5];
        std::string info[5];

        enum Field{
         firstname= 0,
         lastname,
         nickname,
         phonenumber,
         darkestsecret,

        };
    public:
        Contact();
        virtual ~Contact();

        bool set_info(int i);
        void display_header();
        void display();
};

#endif
