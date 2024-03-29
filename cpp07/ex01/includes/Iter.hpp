/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:38:42 by msharifi          #+#    #+#             */
/*   Updated: 2023/09/08 15:08:41 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename U>

void	iter(T *tab, int size, void (*f)(U&))
{
	if (size < 0)
	{
		std::cerr << "Size must be a positive integer" << std::endl;
		return ;
	}
	for (int i = 0; i < size; i++)
		f(tab[i]);
}

template <typename T>

void	printElem(T &elem)
{
	std::cout << elem << " ";
}

#endif
