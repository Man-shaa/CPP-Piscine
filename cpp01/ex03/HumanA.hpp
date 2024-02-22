/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:40:29 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/26 22:32:48 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		std::string	getName(void) const;
		void		attack(void);
};

#endif