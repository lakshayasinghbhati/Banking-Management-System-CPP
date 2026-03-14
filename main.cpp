#include <iostream>
#include "Bankaccount.h"
#include <fstream>
using namespace std;
int main(){
   bankaccount acc;
   int choice;
   do{
    cout<<"\n=== BANK MENU ===\n";
    cout<<"1. create account\n";
    cout<<"2. display all accounts\n";
    cout<<"3.search account \n";
    cout<<"4.deposit moeny \n";
    cout<<"5. exit\n";
    cin>>choice;
    switch(choice){
        case 1 : {
            acc.createaccount();
            acc.writetofile();
            break;
                }
        case 2 : {
            acc.readfromfile();
                break;
            }
        case 3 : {
            int num;
            cout<<"enter account number ";
            cin>>num;
            acc.searchaccount(num);
            break;
                }
        case 4: {
            int num;
            cout<<"enter account number ";
            cin>>num;
            acc.deposit(num);
            break;
        }        
        case 5: {
            cout<<"thankyou";
            break;
                }
                default:
            cout<<"invalid choice \n";
        }
    }

   while(choice!=3);
   return 0;
}