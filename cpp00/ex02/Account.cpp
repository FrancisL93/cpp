#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit) {
	_amount = initial_deposit;
	_nbDeposits = 1;
	_nbWithdrawals = 1;
	std::cout << time();
}

static int	getNbAccounts(void) {
	return (_nbAccounts);
}

static int	getTotalAmount(void) {
	return (_totalAmount);
}

static int	getNbDeposits(void) {
	return (_totalNbDeposits);
}

static int	getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

static void	displayAccountsInfos(void) {
	std::cout << _nbAccounts;
	std::cout << _totalAmount;
	std::cout << _totalNbDeposits;
	std::cout << _totalNbWithdrawals;
}

int		checkAmount(void) const {
	return (_amount);
}

void	displayStatus(void) const {

}