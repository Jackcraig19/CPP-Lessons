#include "bank.h"

BankAccount::BankAccount(const int& initialBalance) {
    balance = initialBalance;
}

int BankAccount::getBalance() {
    return balance;
}

bool BankAccount::withdraw(const int& amt) {
    if (amt < 0 || balance - amt < 0)
        return false;
    balance = balance - amt;
    return true;
}

void BankAccount::deposit(const int& amt) {
    if (amt < 0)
        return;
    balance += amt;
}

bool BankAccount::transferMoney(BankAccount& other, const int& amount) {
    bool isPossible = withdraw(amount);
    if (isPossible) {
        other.deposit(amount);
        return true;
    }
    return false;
}