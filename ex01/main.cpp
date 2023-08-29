/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:28:27 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/28 15:35:34 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	std::string input;
	Phonebook phonebook;

	while(std::cin) {
		std::cout << "Enter a command (SEARCH | ADD | EXIT): " << std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT")
			return 0;
		else if (input == "ADD") {
            if (!phonebook.addContact()) {
                std::cout << "Adding contact failed. Exiting." << std::endl;
                return -1;
            }
        }
		else if (input == "SEARCH") {
			if (!phonebook.searchContact()) {
                std::cout << "Searching contact failed. Exiting." << std::endl;
                return -1;
            }
		}
		else {
			if (!std::cin.eof())
				std::cout << "Only SEARCH | ADD |EXIT commands accepted. Mind the case!" <<std::endl;
		}
	}
	return (0);
}