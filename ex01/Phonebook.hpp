/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:06:36 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/28 15:27:51 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "iostream"
# include "Contact.hpp"

class Phonebook
{
	public:
		
		//constractor doesn't have a return type and it's name matches the name of the class
		Phonebook();
		//destructor
		~Phonebook();
		
		void Print() {
			std::cout << "It's Phonebook" << std::endl;
		}
		//add_contact
		//search_contact
		int addContact(void);
	private:
		Contact my_phonebook[8];
		int index;
	
};



#endif
