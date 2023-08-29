/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:33:46 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/28 15:37:14 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	return;
};

Contact::~Contact() {
	// std::cout << "Contact destructor is called" << std::endl;
	return;
}

//Contact contact;

void Contact::setName(const std::string &newName) {
	_first_name = newName;
}

void Contact::setLastName(const std::string &newLastName) {
	_last_name = newLastName;
}

void Contact::setNickname(const std::string &newNickname) {
	_nickname = newNickname;
}

void Contact::setPhoneNumber(const std::string &newPhone) {
	_phone_number = newPhone;
}

void Contact::setSecret(const std::string &newSecret) {
	_darkest_secret = newSecret;
}


std::string Contact::getName(void) const {
	return(this->_first_name);
}

std::string Contact::getLastName(void) const {
	return(this->_last_name);
}

std::string Contact::getNickname(void) const {
	return(this->_nickname);
}

std::string Contact::getPhone(void) const {
	return(this->_phone_number);
}

std::string Contact::getSecret(void) const {
	return(this->_darkest_secret);
}