/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:20:52 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/28 15:37:18 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

Phonebook::Phonebook() {
    this->_index = 0;
	return;
};

Phonebook::~Phonebook() {
	// std::cout << "Phonebbok destructor is called" << std::endl;
	return;
}

bool isNumberValid(std::string input) {
    for (int i = 0; input[i]; i++) {
        if (!isdigit(input[i]))
            return false;
    }
    return true;
}

bool isInputValid(std::string &input) {
    while (true) {
        if (!getline(std::cin, input)) {
            return false;
        }
        if (input.empty()) {
            std::cout << "Empty input. Try again." << std::endl;
        }
        else
            return true;
    }
}

bool Phonebook::addContact(void) {
    Contact my_contact;
    std::string input;

    std::cout << "Enter contact's first name: " << std::endl;
    if (!isInputValid(input))
        return false;
    my_contact.setName(input);

    std::cout << "Enter contact's last name: " << std::endl;
    if (!isInputValid(input))
        return false;
    my_contact.setLastName(input);

    std::cout << "Enter contact's nickname: " << std::endl;
    if (!isInputValid(input))
        return false;
    my_contact.setNickname(input);

    while (1) {
        std::cout << "Enter contact's phone number: " << std::endl;
        if (!getline(std::cin, input))
            return false;
        if (input.empty() || !isNumberValid(input)) {
            std::cout << "Number is not valid. Try again." << std::endl;
        }
        else
            break;
    }
    my_contact.setPhoneNumber(input);

    std::cout << "Enter contact's darkest secret: " << std::endl;
    if (!isInputValid(input))
        return false;
    my_contact.setSecret(input);

    if (this->_index > 7)
        this->_index = 0;
    this->_my_phonebook[this->_index] = my_contact;
    this->_index = this->_index + 1;

	return true;
}

std::string strCut(std::string str) {
    if (str.length() > 10)
        return str.substr(0, 10);
    return str;
}

static void printListContacts(Contact contact, int i) {
    std::cout << std::right << std::setw(10) << i << "|";
    std::cout << std::right << std::setw(10) << strCut(contact.getName()) << "|";
    std::cout << std::right << std::setw(10) << strCut(contact.getLastName()) << "|";
    std::cout << std::right << std::setw(10) << strCut(contact.getNickname()) << "|" << std::endl;
}

static void printContact(Contact contact) {
    std::cout << "Name: " << contact.getName() << std::endl;
    std::cout << "Last name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname" << contact.getNickname() << std::endl;
    std::cout << "Phone number" << contact.getPhone() << std::endl;
    std::cout << "Secret" << contact.getSecret() << std::endl;
}

bool Phonebook::searchContact(void) const {
    std::string input;
    int index;

    if (this->_my_phonebook[0].getName().empty()) {
        std::cout << "Phonebook is empty." << std::endl;
        return true;
    }

    for (int i = 0; i < 8; i++) {
        if (!this->_my_phonebook[i].getName().empty()) {
            printListContacts(this->_my_phonebook[i], i);
        }
    }

    while (true) {
        std::cout << "Enter an index to see the whole contact info: " << std::endl;
        if (!getline(std::cin, input))
            return false;
        if (input.empty())
            std::cout << "Input is empty. Try again." <<std::endl;
        else {
            index = input[0] - '0';
            if (input[1] || index < 0 || index > 7 || this->_my_phonebook[index].getName().empty())
                std::cout << "Invalid index. Try again" << std::endl;
            else
                break;
        }
    }
    printContact(this->_my_phonebook[index]);
    return (true);
}