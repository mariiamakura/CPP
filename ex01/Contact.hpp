/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:29:04 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/28 15:29:20 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public:
		Contact(); //constructor
		~Contact(); //destuctor

		void setName(const std::string &newName);
		void setLastName(const std::string &newLastName);
		void setNickname(const std::string &newNickname);
		void setPhoneNumber(const std::string &newPhone);
		void setSecret(const std::string &newSecret);
		
		std::string getName(void) const; //for foo that does not modify the object;
		std::string getLastName(void) const;
		std::string getNickname(void) const;
		std::string getPhone(void) const;
		std::string getSecret(void) const;

        //mb comparison function?
		
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif