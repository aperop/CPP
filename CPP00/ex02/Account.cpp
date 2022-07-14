//
// Created by Denim Hawkgirl on 5/30/22.
//

#include "Account.hpp"
#include "ctime"
#include "iostream"
#include "iomanip"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_accountIndex = Account::_nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_displayTimestamp();
    std::cout << "index:"   << this->_accountIndex  << ";";
    std::cout << "amount:"  << this->_amount        << ";";
    std::cout << "created"  << std::endl;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
}

Account::~Account(void)
{
    this->_displayTimestamp();
    Account::_totalAmount -= this->_amount;
    std::cout << "index:"   << this->_accountIndex  << ";";
    std::cout << "amount:"  << this->_amount        << ";";
    std::cout << "closed"   << std::endl;
    Account::_nbAccounts--;
}

void Account::makeDeposit(int deposit)
{
    this->_displayTimestamp();
    std::cout << "index:"       << this->_accountIndex  << ";";
    std::cout << "p_amount:"    << this->_amount        << ";";
    std::cout << "deposit:"     << deposit              << ";";
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "amount:"      << this->_amount        << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits    << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    this->_displayTimestamp();
    std::cout << "index:"       << this->_accountIndex  << ";";
    std::cout << "p_amount:"    << this->_amount        << ";";
    std::cout << "withdrawal:";
    if (this->checkAmount() < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (1);
    }
    std::cout << withdrawal << ";";
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    std::cout << "amount:"          << this->_amount        << ";";
    std::cout << "nb_withdrawals:"  << this->_nbWithdrawals << std::endl;
    return (0);
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

void Account::displayStatus(void) const
{
    this->_displayTimestamp();
    std::cout << "index:"       << this->_accountIndex  << ";";
    std::cout << "amount:"      << this->_amount        << ";";
    std::cout << "deposits:"    << this->_nbDeposits    << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:"    << _nbAccounts          << ";";
    std::cout << "total:"       << _totalAmount         << ";";
    std::cout << "deposits:"    << _totalNbDeposits     << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals  << std::endl;
}

void Account::_displayTimestamp(void)
{
    time_t now = std::time(0);
    std::tm *time = std::localtime(&now);

    std::cout << "[" << std::setfill('0');
    std::cout << std::setw(4) << time->tm_year + 1900;
    std::cout << std::setw(2) << time->tm_mon + 1;
    std::cout << std::setw(2) << time->tm_mday;
    std::cout << '_';
    std::cout << std::setw(2) << time->tm_hour;
    std::cout << std::setw(2) << time->tm_min;
    std::cout << std::setw(2) << time->tm_sec << "] ";
}
