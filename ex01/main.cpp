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
	Phonebook my_phonebook;
	Contact my_contact;

	while(std::cin) {
		my_phonebook.Print();
		std::cout << "Enter a command (SEARCH | ADD | EXIT): " << std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT") {
			std::cout << "-----Exiting-----" << std::endl;
			return (0);
		}
		else if (input == "ADD") {
			//my_phonebook.addContact();
			std::cout << "-----Adding-----" << std::endl;
			std::cout << "Enter the name: ";
            std::getline(std::cin, input);
			my_contact.setName(input);
			std::cout << "Added contact with name: " << my_contact.getName() << std::endl;
		}
		else if (input == "SEARCH") {
			std::cout << "-----Searching-----" << std:: endl;
		}
		else {
			if (!std::cin.eof())
				std::cout << "Only SEARCH | ADD |EXIT commands accepted. Mind the case!" <<std::endl;
		}
	}
	return (0);
}