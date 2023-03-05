#ifndef ACCOUNT
#define ACCOUNT

#include <string>

class Account{

    public: 
        Account();
        ~Account();
        Account(const Account& origAccount);
        Account(int userID, string userName, double userBalance);
        setName(string userName);
        getName();
        setID(int userID);
        getID();
        setbalance(double userBalance);
        getBalance();

    private:
        int id;
        string name;
        double balance;
};

#endif