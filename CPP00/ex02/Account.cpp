/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 00:28:09 by phunguye          #+#    #+#             */
/*   Updated: 2023/02/01 01:51:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void ){
    _accountIndex = 0;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}

Account::Account( int initial_deposit ){
    Account();
    _amount = initial_deposit;
    _accountIndex = _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account( void ){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

void	Account::_displayTimestamp(){
	time_t time_now = time(NULL);
	struct tm *local_time = localtime(&time_now);
	 std::cout << '[' <<local_time->tm_year + 1900 <<local_time->tm_mon <<local_time-> tm_mday << "_"
    <<local_time->tm_hour <<local_time->tm_min <<local_time->tm_sec << "] ";
}
/*struct tm {
   int tm_sec;         seconds,  range 0 to 59          
   int tm_min;         minutes, range 0 to 59           
   int tm_hour;        hours, range 0 to 23             
   int tm_mday;        day of the month, range 1 to 31  
   int tm_mon;         month, range 0 to 11             
   int tm_year;        The number of years since 1900   
   int tm_wday;        day of the week, range 0 to 6    
   int tm_yday;        day in the year, range 0 to 365  
   int tm_isdst;       daylight saving time             
};*/

int	Account::getNbAccounts( void ){
	return(_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return(_totalAmount);
}

int	Account::getNbDeposits( void ){
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}


void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	_nbDeposits++;
	std::cout <<"index:"<<_accountIndex<<";";
	std::cout<<"p_amount:"<<_amount<<";";
	std::cout<<"deposit:"<<deposit<<";";
	std::cout<<"amount:"<<_amount + deposit<<";";
	std::cout<<"nb_deposits:"<<_nbDeposits<< std::endl;
	_totalAmount += deposit;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";

    if (_amount - withdrawal > 0)
    {
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << _amount - withdrawal << ";";
        std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        return (true);
    }
    else
    {
        std::cout << "withdrawal:" << "refused" << std::endl;
        return (false);
    }
}

int		Account::checkAmount( void ) const{
	return (_amount);
}

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}
