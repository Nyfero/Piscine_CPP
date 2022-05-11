#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>



Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
}

Account::~Account()
{}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << deposit << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_nbWithdrawals++;
	return (withdrawal > 0);
}

int		Account::checkAmount() const
{
	return (_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";created" << std::endl;
}

void	Account::displayAccountsInfos()
{
	std::cout << "display_accounts_infos" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	std::cout << "[" << t << "] ";
}
