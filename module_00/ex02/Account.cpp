#include "Account.hpp"
#include <iostream>
#include <ctime>

//*******************************************//
//            NON-MEMBERS FUNCTIONS          //
//*******************************************//

int     Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int     Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int     Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int     Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp;
	std::cout << "accounts: " << _nbAccounts << ";";
	std::cout << "total: " << _totalAmount << ";";
	std::cout << "deposits: " << _totalNbDeposits << ";";
	std::cout << "withdrawals: " << -_totalNbWithdrawals << ";" << std::endl;

}
//*******************************************//
//         CONSTRUCTORS/DESTRUCTORS          //
//*******************************************//

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	std::cout << "created" << std::endl;
	return ;
}

Account::~Account(void)
{
	std::cout << "closed " << std::endl;
	return ;
}

//*******************************************//
//             MEMBERS FUNCTIONS             //
//*******************************************//

void    Account::makeDeposit(int deposit)
{
	std::cout << " " << std::endl;
	return ;
}

bool    Account::makeWithdrawal(int withdrawal)
{
	std::cout << " " << std::endl;
	return ;
}

int		Account::checkAmount( void ) const
{
	std::cout << " " << std::endl;
	return ;
}

void	Account::displayStatus( void ) const
{
	std::cout << " " << std::endl;
	return ;
}

//*******************************************//
//               TIME TREATMENT              //
//*******************************************//

void	Account::_displayTimestamp( void )
{
	std::cout << "[ now ]" << std::endl;
	return ;
}

int     Account::_nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals = 0;