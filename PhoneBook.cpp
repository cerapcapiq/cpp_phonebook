/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:02:15 by abasarud          #+#    #+#             */
/*   Updated: 2022/12/27 15:55:09 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->amount = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::run_program()
{
    std::cout << "Type ADD, SEARCH, or EXIT" << std::endl;
}

void PhoneBook::add_contact()
{
    if (this->amount == 2)
				this->contact[this->amount == 1].set_info(this->amount - 1);
    else if (this->contact[this->amount].set_info(this->amount + 1))
        this->amount++;
}

void PhoneBook::show_header()
{
    std::cout << "|   Index   | First name | Last name  | Nickname  |" <<std::endl;
    for (int i = 0; i < this->amount; i++)
        this->contact[i].display_header();
}

void PhoneBook::search_contact()
{
    int i;
    if (this->amount == 0)
        std::cout << "add contact" << std::endl;
    else{
        this->show_header();
        std::cout << "type number of index" << std::endl;
        while (!(std::cin >> i ) || ( i < 0 || i > this->amount))
        {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "invalid";
        }
        std::cin.ignore();
        if (i > 0)
            this->contact[i - 1].display();
    }
}
