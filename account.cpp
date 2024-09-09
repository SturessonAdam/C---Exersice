#include "account.h"
#include <iostream>

Account::Account(const std::string& owner, int balance, int accountnumber)
    : owner(owner), balance(balance), accountnumber(accountnumber) {}


void Account::insert() {
    int amount;
    std::cout << "How much do you want to insert?" << std::endl;
    std::cin >> amount;

    balance += amount;
}

void Account::withdraw() {
    int amount;
    std::cout << "How much do you want to withdraw?" << std::endl;
    std::cin >> amount;

    if(amount >0 && amount <= balance) {
    balance -= amount;
    }
    else {
        std::cout << "You dont have that much money" << std::endl;
    }
}

void Account::checkBalance() {
    std::cout << "Your balance is: " << balance << std::endl;
}