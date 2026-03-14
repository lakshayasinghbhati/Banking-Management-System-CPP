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

void bankaccount::searchaccount(int num){
    bankaccount acc;
    ifstream infile;
    infile.open("account.dat",ios::binary);
    bool found=false;
    while(infile.read(reinterpret_cast<char *>(&acc),sizeof(bankaccount))){
    if(acc.getaccountnumber()==num){
        cout<<"account found";
        acc.displayaccount();
        found = true; 
       break;
    }
    }
    infile.close();
    if(!found){
        cout<<"\n account is not found";
    }
}

void bankaccount::deposit(int num){
    bankaccount acc;
    fstream iffile;
    iffile.open("account.dat",ios::binary|ios::in|ios::out);
    bool found = false;
    while(iffile.read(reinterpret_cast<char *>(&acc),sizeof(bankaccount))){
        if(acc.getaccountnumber() == num){
            double amount;
            cout<<"enter money to be deposited = ";
            cin>>amount;
            acc.balance+=amount;
            iffile.seekp(-sizeof(bankaccount),ios::cur);
            iffile.write(reinterpret_cast<char*>(&acc),sizeof(bankaccount));
            cout<<"\n money deposited sucessfully";
            found=true;
            break;
            
        }
    }
    iffile.close();
    if(!found){
        cout<<"\n account not found";
    }
    }
