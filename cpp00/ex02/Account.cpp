/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:00:59 by msharifi          #+#    #+#             */
/*   Updated: 2023/04/26 18:21:31 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
static int	i;

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "[19920104_091532] " << "index:" << i << ";amount:" << initial_deposit
	<< ";created" << std::endl;
	i++;
	if (i == 8)
		i = 0;
	return ;
}

Account::~Account(void)
{
	std::cout << "[19920104_091532] " << "index:" << i << ";amount:" << _amount
	<< ";closed" << std::endl;
	i++;
	if (i == 8)
		i = 0;
	return ;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "[19920104_091532] accounts:" << getNbAccounts() << ";total:"
	<< getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits = 1;
	_totalNbDeposits++;
	std::cout << "[19920104_091532] index:" << i << ";p_amount:" << _amount << ";deposit:"
	<< deposit << ";amount:";
	_amount = _amount + deposit;
	_totalAmount += deposit;
	std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	i++;
	if (i == 8)
		i = 0;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount < withdrawal)
	{
		std::cout << "[19920104_091532] index:" << i << ";p_amount:" << _amount
		<< ";withdrawal:refused" << std::endl;
		i++;
		if (i == 8)
			i = 0;
		return (false);
	}
	_nbWithdrawals = 1;
	_totalNbWithdrawals++;
	std::cout << "[19920104_091532] index:" << i << ";p_amount:" << _amount
	<< ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	i++;
	if (i == 8)
		i = 0;
	return (true);
}

void	Account::displayStatus(void) const
{
	std::cout << "[19920104_091532] " << "index:" << i << ";amount:" << _amount
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	i++;
	if (i == 8)
		i = 0;
	return ;
}
