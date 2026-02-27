#include <iostream>
#include<string>
using namespace std;
class bankaccount{
    private:
    int accountnumber;
    double balance;
    string name;
    public:
    void createaccount();
    void displayaccount() const;
    int getaccountnumber() const;
    void writetofile();
    void readfromfile();
};