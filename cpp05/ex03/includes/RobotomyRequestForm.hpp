/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:23:32 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/19 13:37:48 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>

class	RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(RobotomyRequestForm &toCopy);
		~RobotomyRequestForm();

		RobotomyRequestForm	&operator = (RobotomyRequestForm &toCopy);

		void	execute(Bureaucrat const &executor) const;
};

#endif
