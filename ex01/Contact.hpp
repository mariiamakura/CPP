/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:29:04 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/28 13:25:29 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "CONTACT_HPP"
# define "CONTACT_HPP"

# include <iostream>

class Contact
{
	public:
	Contact(); //constructor
	
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif