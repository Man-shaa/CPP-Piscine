/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:48:08 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/25 18:40:51 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook -> Constructor called" << std::endl << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook -> Destructor called" << std::endl << std::endl;
	return ;
}

void	PhoneBook::CatchInstruction(void)
{
	std::string	input;

	nContact = 0;
	newIndex = 0;
	getline(std::cin, input);
	while (input.compare("EXIT") != 0 && std::cin.eof() == false)
	{
		if (input.compare("ADD") == 0)
		{
			newIndex = nContact % 8;
			contact[newIndex].InitContact(newIndex);
			nContact++;
		}
		if (input.compare("SEARCH") == 0)
		{
			PrintAllContact();
			printChosenContact();
		}
		getline(std::cin, input);
	}
}

void	PhoneBook::PrintAllContact(void)
{
	for (int i = 0; i < nContact && i < 8; i++)
	{
		contact[i].PrintContactRow();
	}
}

void	PhoneBook::printChosenContact(void)
{
	std::string	input;
	std::stringstream	stream;
	int			index;

	getline(std::cin, input);
	if (VerifEof())
		return ;
	while (input.size() != 1 || input.compare("0") < 0 || input.compare("0") >= 8)
	{
		std::cout << "Index must be between 0 and 7" << std::endl;
		getline(std::cin, input);
	}
	stream.clear();
	stream.str(input);
	stream >> index;
	if (index >= nContact)
		std::cout << "Contact doesn't exist, make sure to create it before !" << std::endl;
	else
		contact[index].PrintContact();
}
