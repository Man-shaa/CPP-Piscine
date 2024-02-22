/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:13:46 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/26 13:57:10 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	std::cout << "Contact -> Constructor called" << std::endl << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact -> Destructor called" << std::endl << std::endl;
	return ;
}

std::string	Contact::_ParseStringInput(std::string input)
{
	if (input.size() > 10)
		input = input.substr(0, 9) + ".";
	else if (input.empty())
		input = "Default";
	return (input);
}

void	Contact::InitContact(int index)
{
	std::string 	input;

	_index = index;
	std::cout << "Enter you first name : ";
	getline(std::cin, _firstName);
	if (_firstName.empty() == true)
		_firstName = "default";
	if (VerifEof())
		return ;

	std::cout << "Enter you last name : ";
	getline(std::cin, _lastName);
	if (_lastName.empty() == true)
		_lastName = "default";
	if (VerifEof())
		return ;

	std::cout << "Enter you nickname : ";
	getline(std::cin, _nickname);
	if (_nickname.empty() == true)
		_nickname = "default";
	if (VerifEof())
		return ;

	std::cout << "Enter your phone number : ";
	getline(std::cin, _phoneNumber);
	if (_phoneNumber.empty() == true)
		_phoneNumber = "default";
	if (VerifEof())
		return ;

	std::cout << "Enter your darkest sercret : ";
	getline(std::cin, _darkestSecret);
	if (_darkestSecret.empty() == true)
		_darkestSecret = "default";
	if (VerifEof())
		return ;
}

int	VerifEof()
{
	if (std::cin.eof() == true)
	{
		std::cout << "Cannot read form stdin !" << std::endl;
		return (1);
	}
	return (0);
}

void	Contact::PrintContact(void)
{
	std::cout << "INDEX : " << _index << std::endl << std::endl;
	std::cout << "First Name : " << _firstName << std::endl;
	std::cout << "Last Name : " << _lastName << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phoneNumber << std::endl;
	std::cout << "Darkest secret : " << _darkestSecret << std::endl;
}

void	Contact::PrintContactRow(void)
{
	std::cout << std::setw(10) << _index << std::flush;
	std::cout << '|' << std::setw(10) << _ParseStringInput(_firstName) << std::flush;
	std::cout << '|' << std::setw(10) << _ParseStringInput(_lastName) << std::flush;
	std::cout << '|' << std::setw(10) << _ParseStringInput(_nickname) << std::flush << '|' << std::endl;
}
