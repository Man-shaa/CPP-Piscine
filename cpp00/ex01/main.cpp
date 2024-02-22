/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:05:51 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/24 14:00:11 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void	CatchInstruction(void);

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	PhoneBook		Pbook;

	Pbook.CatchInstruction();
	return (0);
}
