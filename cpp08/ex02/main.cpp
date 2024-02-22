/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:25:44 by msharifi          #+#    #+#             */
/*   Updated: 2023/09/08 20:05:44 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main (void)
{
	MutantStack<int> chadStack;

	chadStack.push(50);
	chadStack.push(2);
	chadStack.push(3);
	chadStack.push(117);
	chadStack.push(712);
	for (MutantStack<int>::iterator it = chadStack.begin(); it != chadStack.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	std::cout << std::endl << "TOP : " << chadStack.top() << " | SIZE : " << chadStack.size() << std::endl;
	chadStack.pop();
	std::cout << "TOP after POP : " << chadStack.top() << " | SIZE : " << chadStack.size() << std::endl << std::endl;

	// ITERATOR
	MutantStack<int>::iterator it = chadStack.begin();
	std::cout << "Begin iterator : " << *it << std::endl;
	++it;
	std::cout << "After ++it : " << *it << std::endl;
	--it;
	std::cout << "After --it : " << *it << std::endl;
	MutantStack<int>::iterator it_end = chadStack.end();
	std::cout << "Last iterator : " << *it_end << std::endl;
	return 0;
}
