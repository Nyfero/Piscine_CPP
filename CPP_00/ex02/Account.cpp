#include "Account.hpp"
<<<<<<< HEAD
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
=======

static int	Account::getNbAccounts(void)
{
	
}

static int	Account::getTotalAmount(void)
{
	
}

static int	Account::getNbDeposits(void)
{
	
}

static int	Account::getNbWithdrawals(void)
{
	
}

static void	Account::displayAccountsInfos(void)
{
	
}

Account::Account(int initial_deposit)
{
	
}

Account::~Account(void)
{
	
}

void Account::makeDeposit(int deposit)
{
	
}


bool	Account::makeWithdrawal(int withdrawal)
{
	
}

int		Account::checkAmount(void) const
{
	
}

void	Account::displayStatus(void) const
{
	
}

static void	Account::_displayTimestamp(void)
{
	
}
>>>>>>> 825e27e9d32e2c1b5fb77fa7074d451aafcca001
