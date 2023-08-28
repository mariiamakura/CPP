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
	first_name = newName;
}

void Contact::setLastName(const std::string &newLastName) {
	last_name = newLastName;
}

void Contact::setNickname(const std::string &newNickname) {
	nickname = newNickname;
}

void Contact::setPhoneNumber(const std::string &newPhone) {
	phone_number = newPhone;
}

void Contact::setSecret(const std::string &newSecret) {
	darkest_secret = newSecret;
}


std::string Contact::getName(void) const {
	return(this->first_name);
}

std::string Contact::getLastName(void) const {
	return(this->last_name);
}

std::string Contact::getNickname(void) const {
	return(this->nickname);
}

std::string Contact::getPhone(void) const {
	return(this->phone_number);
}

std::string Contact::getSecret(void) const {
	return(this->darkest_secret);
}