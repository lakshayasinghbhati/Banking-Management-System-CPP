#include <iostream>
#include "Bankaccount.h"
#include <fstream>
using namespace std;

void bankaccount::createaccount() {
    cout << "account number = " << endl;
    cin >> accountnumber;

    cout << "name = " << endl;
    cin >> name;

    cout << "enter balance = " << endl;
    cin >> balance;
}

void bankaccount::displayaccount() const {
    cout << "account number = " << accountnumber << endl;
    cout << "balance = " << balance << endl;
    cout << "name = " << name << endl;
}

int bankaccount::getaccountnumber() const {
    return accountnumber;
}

void bankaccount::writetofile(){
    ofstream outfile;
    outfile.open("account.dat",ios::binary|ios::app);
    outfile.write(reinterpret_cast<char*>(this),sizeof(*this));
    outfile.close();
    cout<<"record saved to file";
}

void bankaccount::readfromfile(){
    ifstream infile;
    infile.open("account.dat",ios::binary);
    if(!infile){
        cout<<"file not found";
        return;
    }
    while(infile.read(reinterpret_cast<char*>(this),sizeof(*this))){
        displayaccount();
    }
    infile.close();


}