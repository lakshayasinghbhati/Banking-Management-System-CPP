# Banking-Management-System-CPP
Console based Banking System using C++ with OOP and File Handling
Features
 version 1
 Create New Bank Account  
 Store Account Data in File  
 Display All Saved Accounts  
 Menu Driven Program  
 Data Persistence After Program Restart  
 
 Version 2 (Upgrade)
 Search Account by Account Number  
 Deposit Money into Existing Account  
 Update Account Balance Directly in Binary File  

Version 3 Update – Withdraw Feature
A new feature has been implemented to simulate real banking transactions.
Allows user to withdraw money from an account  
Validates if sufficient balance is available  
Deducts the withdrawal amount  
Updates the record in binary file using file pointer (`seekp`)  

Concepts Used
Version 1 focused on:
- Classes & Objects  
- Encapsulation  
- Header & Source File Separation  
- File Handling using fstream  
- Binary File Operations  
- Modular Programming  

Version 2 introduces:
- Account search functionality
- Deposit transactions
- Direct record update using file pointers (`seekp`)

Version 3 focused on:
Withdraw Money Functionality
- Search account using account number  
- Check available balance before withdrawal  
- Prevent overdrawing (insufficient balance handling)  
- Update account data using binary file handling  
- Uses file pointer manipulation (`seekp`) for in-place updates  

---Current System Features
- Create Account  
- Display All Accounts  
- Search Account  
- Deposit Money  
- Withdraw Money 

## How to Run

```bash
g++ main.cpp Bankaccount.cpp -o bank
./bank
