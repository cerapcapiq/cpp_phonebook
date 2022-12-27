/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:09:05 by abasarud          #+#    #+#             */
/*   Updated: 2022/12/27 14:30:42 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook;
    std::string input;
    bool run;

    PhoneBook.run_program();
    run = true;
    while (run)
    {
        std::getline(std::cin, input);
        if (input == "ADD")
            PhoneBook.add_contact();
        else if (input == "SEARCH")
            PhoneBook.search_contact();
        else if (input == "EXIT")
        {
            std::cout << "bye" << std::endl;
            run = false;

        }
    }
    return(0);
}