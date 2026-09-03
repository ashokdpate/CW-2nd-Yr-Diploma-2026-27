/*
Problem :7 
Write a C++ program with two classes BankSBI and BankHDFC, BankIDBI Store the account balance in each class as private data. 
Use a friend function to calculate the total balance.
*/

#include <iostream>
using namespace std;
class BankSBI;
class BankHDFC;

class BankSBI{
private:
    int balance;
    public:
    BankSBI(){
         balance=10458;
    }
    friend void calculateBalance(BankSBI s, BankHDFC h, BankIDBI i);
};

class BankHDFC{
    private:
    int balance;

    public:
    BankHDFC(){
        balance=5646;
    }
    friend void calculateBalance(BankSBI s, BankHDFC h, BankIDBI i);
};

class BankIDBI{
    private:
    int balance;
    public:
    BankIDBI(){
        balance=78965;
    }
    friend void calculateBalance(BankSBI s, BankHDFC h, BankIDBI i);
};

void calculateBalance(BankSBI s, BankHDFC h, BankIDBI i){

    int totalBalance=s.balance+h.balance+i.balance;
    cout<<"Total Balance is : "<<totalBalance;
}


int main(){
    BankSBI s;
    BankHDFC h;
    BankIDBI i;

    calculateBalance(s,h,i);
}