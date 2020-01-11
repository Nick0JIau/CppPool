/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:31:49 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 15:31:50 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "Index: " << _accountIndex << "; amount: " << _amount << "; created" << std::endl;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "Index: " << _accountIndex << "; amount: " << _amount << "; closed" << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "Index: " << _accountIndex << "; amount: " << _amount << "; deposit: " << deposit;
    _amount += deposit;
    _nbDeposits++;
    std::cout << "Index: " << _accountIndex << "; amount: " << _amount << "; deposits_nb: " << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "Index: " << _accountIndex << "; amount: " << _amount << "; withdrawal: ";
    if (_amount < withdrawal)
    {
        std::cout << "amount is too small" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    std::cout << withdrawal << "; amount: " << _amount << "; withdrawals_nb: " << _nbWithdrawals << std::endl;
    return true;    
}

int     Account::checkAmount(void) const
{
    _displayTimestamp();
    std::cout << "Index: " << _accountIndex << "; amount: " << _amount << std::endl;
    return _amount;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "Index: " << _accountIndex << "; amount: " << _amount << "; deposits: " << _nbDeposits;
    std::cout << "; withdrawals: " << _nbWithdrawals << std::endl;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
    time_t  rawtime;
    struct  tm *timeinfo;
    char    buffer[19];

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 19, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
}

void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "Accounts: " << _nbAccounts << "; Total amounts: " << _totalAmount << "; Total deposits: ";
    std::cout << _totalNbDeposits << "; Withdrawal: " << _totalNbWithdrawals << std::endl;
}
