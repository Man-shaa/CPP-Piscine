/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:09:24 by msharifi          #+#    #+#             */
/*   Updated: 2023/09/08 19:31:59 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0)
{
	std::cout << "Span default constructor called" << std::endl;
	return ;
}

Span::Span(unsigned long N) : _N(N)
{
	std::cout << "Span constructor called" << std::endl;
	return ;
}

Span::Span(Span const &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	std::cout << "Span copy constructor called" << std::endl;
	return ;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
	return ;
}

Span	&Span::operator = (Span const &toCopy)
{
	_N = toCopy._N;
	_list.assign(toCopy._list.begin(), toCopy._list.end());
	return (*this);
}

const char *Span::TooManyNumbersException::what() const throw()
{
	return ("Exception : Array cannt accept any more numbers");
}

void	Span::addNumber(int n)
{
	if (_list.size() >= _N)
		throw (TooManyNumbersException());
	_list.push_back(n);
}

void	Span::addNumberFromTab(int *tab, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (_list.size() >= _N)
			throw (TooManyNumbersException());
		_list.push_back(tab[i]);
	}
}

int		Span::shortestSpan()
{
	_list.sort();
	std::list<int>::iterator itNext = _list.begin();
	itNext++;

	int	diffSave = 2147483647;
	for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++)
	{
		if (abs(*itNext - *it) < diffSave)
			diffSave = abs(*itNext - *it);
		itNext++;
	}
	return (diffSave);
}

int		Span::longestSpan()
{
	_list.sort();
	return (_list.back() - _list.front());
}

void	Span::printList()
{
	std::list<int>::iterator it = _list.begin();
	while (it != _list.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}
