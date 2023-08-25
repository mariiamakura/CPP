/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:19:35 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/25 16:29:37 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
	std::string empty = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string new_case; 
	int j = 0;

	if (ac < 2)
	{
		std::cout << empty << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		new_case = av[i];
		j = 0;
		while (new_case[j])
		{
			if (std::islower(new_case[j]))
				std::cout << (char)std::toupper(new_case[j]);
			else 
				std::cout << (char)std::tolower(new_case[j]);
			j++;
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}