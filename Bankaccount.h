#include <iostream>
#include<string>
using namespace std;
class bankaccount{
    private:
    int accountnumber;
    double balance;
    char name[50];
    public:
    void createaccount();
    void displayaccount() const;
    int getaccountnumber() const;
    void writetofile();
    void readfromfile();
    void searchaccount(int num);
    void deposit(int num);
    void withdraw(int num);
};