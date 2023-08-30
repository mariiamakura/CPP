/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:23:08 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/30 14:12:15 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
			<< ";created" << std::endl;
}

Account::~Account (void) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
			<< ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}
int	Account::getTotalAmount( void ) {
	return _totalAmount;
}
int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void) {
	time_t my_time = time(NULL);
	tm *tm = localtime(&my_time);

	std::cout << "[" << (tm->tm_year + 1900) << std::setw(2) << std::setfill('0')
			<< tm->tm_mon + 1 << std::setw(2) << std::setfill('0')
			<< tm->tm_mday << "_" << std::setw(2) << std::setfill('0') << tm->tm_hour
			<< std::setw(2) << std::setfill('0') << tm->tm_min 
			<< std::setw(2) << std::setfill('0') << tm->tm_sec << "]";
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();

	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const {
	_displayTimestamp();

	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;

	this->_amount +=deposit;
	this->_nbDeposits++;
	_totalAmount +=deposit;
	_totalNbDeposits++;

	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount 
			<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;

	if (withdrawal > this->_amount) {
		std::cout << "not enough money on the account for withdrawal" <<std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;

	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount 
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}