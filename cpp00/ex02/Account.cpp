/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:53:06 by ncampbel          #+#    #+#             */
/*   Updated: 2024/09/24 19:35:38 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit)
{
// [19920104_091532] index:7;amount:16576;created  // constructor
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits	= 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
// [19920104_091532] index:7;amount:8942;closed  // destructor
	_nbAccounts--;
	_totalAmount -= _amount;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm *local_time = localtime(&now);
	std::cout << "[" << 1900 + local_time->tm_year << 1 + local_time->tm_mon << local_time->tm_mday
				<< "_" << local_time->tm_hour << local_time->tm_min << local_time->tm_sec << "] ";
}

int Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0 // info
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount()
				<< ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals()
					<< std::endl;	
}

void	Account::displayStatus( void ) const
{
// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0 //status
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposit:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

int	Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::makeDeposit( int deposit )
{
// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1  // deposit
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit
				<< ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (Account::checkAmount() < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal
					<< ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}