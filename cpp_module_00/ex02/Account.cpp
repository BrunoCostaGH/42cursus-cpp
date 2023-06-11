/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:17:07 by bsilva-c          #+#    #+#             */
/*   Updated: 2023/06/11 16:29:29 by bsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() // constructor 1
{
	this->_accountIndex = Account::getNbAccounts();
	Account::_nbAccounts += 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";amount:" << this->_amount << ";created\n";
}

Account::Account(int initial_deposit)  // constructor 2 w/ parameters
{
	this->_accountIndex = Account::getNbAccounts();
	Account::_nbAccounts += 1;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";amount:" << this->_amount << ";created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";amount:" << this->checkAmount()
			  << ";closed\n";
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	int p_amount;

	if (deposit <= 0)
		return ;
	p_amount = this->checkAmount();
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";p_amount:" << p_amount
			  << ";deposit:" << deposit
			  << ";amount:" << this->checkAmount()
			  << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int p_amount;

	p_amount = this->checkAmount();
	if (withdrawal > 0 && withdrawal <= this->checkAmount())
	{
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				  << ";p_amount:" << p_amount
				  << ";withdrawal:" << withdrawal
				  << ";amount:" << this->checkAmount()
				  << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";p_amount:"<< p_amount
			  << ";withdrawal:refused\n";
	return (false);
}

int	Account::checkAmount() const
{
	return (this->_amount);
}

void	Account::_displayTimestamp()
{
	// current date/time based on current system
	time_t current = time(0);
	tm *time = localtime(&current);
	std::cout << "[" << 1900+ time->tm_year << 1 + time->tm_mon << time->tm_mday
			  << "_" << time->tm_hour << time->tm_min << time->tm_sec << "]";
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts()
			  << ";total:" << Account::getTotalAmount()
			  << ";deposits:" << Account::getNbDeposits()
			  << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";amount:" << this->checkAmount()
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
