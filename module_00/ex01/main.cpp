/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:32:36 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 10:32:37 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

static int     is_number_ok(std::string number)
{
    int     i;

    i =0;
    while (number[i])
    {
        if (number[i] == ' ')
        {
            i++;
            continue;
        }
        if (number[i] < '0' || number[i] > '9')
                return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    Phonebook       phonebook;
    std::string     element[5];
    std::string     input;
    int             index;


   phonebook.display_all();

    //tant que l'entree reste ouverte
    while (42 && std::cin.eof() == 0)
    {
        std::cout << "\001\033[1;34m\002PhoneBook> \001\033[0;0m\002";
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            std::cout << "\001\033[1;34m\002\nEnter Contact Information\001\033[0;0m\002" << std::endl;
            std::cout << "First Name: ";
            std::getline(std::cin, element[0]);
            std::cout << "Last Name: ";
            std::getline(std::cin, element[1]);
            std::cout << "Nick Name: ";
            std::getline(std::cin, element[2]);
            do
            {
                std::cout << "Phone NUmber: ";
                std::getline(std::cin, element[3]);
                if (is_number_ok(element[3]))
                    break;
                std::cout << "Please give me good data bro!" << std::endl;
            } while (!is_number_ok(element[3]));
            std::cout << "Darkest Secret: ";
            std::getline(std::cin, element[4]);
            phonebook.add_contact(element);
            std::cout << "\001\033[0;32m\002Contact Added Successfully!\001\033[0;32m\002\n" << std::endl;
        }
        else if (input == "SEARCH")
        {
            phonebook.display_phonebook();
            std::cout << "\nPlease Enter Index: ";
            std::cin >> index;
            if (std::cin.fail() || index < 0 || index >= phonebook.get_size())
            {
                std::cout << "Wrong Index!\n" <<std::endl;
                std::cin.clear();
                std::getline(std::cin, input);
                continue;
            }
            phonebook.display_contact(index);
            std::cin.clear();
            std::getline(std::cin, input);
            continue; 
        }
        else if (input == "EXIT")
            break;
        else
            std::cout << "--- Invalid Command ---\n" << std::endl;
    }
}
