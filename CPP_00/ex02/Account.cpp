#include "Account.hpp"
#include <string>
#include <iostream>



Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_nbAccounts 
}

Account::~Account()
{}

void	Account::makeDeposit(int deposit)
{
	std::cout << deposit << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	return (withdrawal > 0);
}

int		Account::checkAmount() const
{
	return (_amount);
}

void	Account::displayStatus() const
{
	// std::cout << _displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";created" << std::endl;
}

void	Account::displayAccountsInfos()
{}
