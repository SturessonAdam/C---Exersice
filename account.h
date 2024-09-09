#include <string>

class Account {
    public: 
    Account(const std::string& owner, int balance, int accountnumber);

    void insert();
    void withdraw();
    void checkBalance();



    private:
    std::string owner;
    int balance;
    int accountnumber;
};