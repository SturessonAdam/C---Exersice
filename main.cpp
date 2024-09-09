#include <iostream>
#include <string>
#include "account.h"


int main() {

    Account account1("Adam", 500, 12345);

    account1.checkBalance();
    account1.insert();
    account1.checkBalance();
    account1.withdraw();
    account1.checkBalance();


    return 0;
}