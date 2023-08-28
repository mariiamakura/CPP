/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:28:27 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/28 12:17:30 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	std::string input;
	Phonebook phonebook;
	
	// while(std::cin) {
		phonebook.Print();
		std::cout << "Enter a command (SEARCH | ADD | EXIT): " << std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT") {
			std::cout << "-----Exiting-----" << std::endl;
			return (0);
		}
		else if (input == "ADD") {
			std::cout << "-----Adding-----" << std::endl;
		}
		else if (input == "SEARCH") {
			std::cout << "-----Searching-----" << std:: endl;
		}
		else {
			if (!std::cin.eof())
				std::cout << "Only SEARCH | ADD |EXIT commands accepted. Mind the case!" <<std::endl;
		}
	// }
	return (0);
}