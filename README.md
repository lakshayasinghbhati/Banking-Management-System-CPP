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
---

## Concepts Used
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
---

## How to Run

```bash
g++ main.cpp Bankaccount.cpp -o bank
./bank
