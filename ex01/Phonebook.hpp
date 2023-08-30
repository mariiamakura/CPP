/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:06:36 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/30 16:39:07 by mparasku         ###   ########.fr       */
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
		
		bool addContact(void);
        bool searchContact(void) const;
	private:
		Contact _my_phonebook[8];
		int _index;
	
};



#endif
