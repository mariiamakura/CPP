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

# include <iostream>
# include <cctype>
# include <iomanip>
# include "Contact.hpp"

class Phonebook
{
	public:

		//constractor doesn't have a return type and it's name matches the name of the class
		Phonebook();
		//destructor
		~Phonebook();
		
//		void Print() {
//			std::cout << _my_phonebook[0].getName() << std::endl;
//            std::cout << _my_phonebook[1].getName() << std::endl;
//		}
		//add_contact
		//search_contact
		bool addContact(void);
        bool searchContact(void) const;
	private:
		Contact _my_phonebook[8];
		int _index;
	
};



#endif
