/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:58:52 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/25 15:54:40 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <sstream>
# include "Contact.class.hpp"

int	VerifEof();

class PhoneBook
{
	private:
		Contact 	contact[8];
		int	nContact;
		int	newIndex;

	public:

		PhoneBook();
		~PhoneBook(void);
		void	CatchInstruction(void);
		void	PrintAllContact(void);
		void	printChosenContact(void);
};

#endif
