#include<iostream>
#include<string>
using namespace std;
class ATM {
private:
string accountNumber;
int pin;
float balance;
public:
void setAccountNumber(string acc) {
accountNumber = acc;
}
void setPin(int p) {
pin = p;
}
void setBalance(float b) {
balance = b;
}
string getAccountNumber() {
return accountNumber;
}
int getPin() {
return pin;
}
float getBalance() {
return balance;
}
void checkBalance() {
cout<<"Your current balance is: "<<balance<<endl;
}
void depositMoney(float amount) {
balance += amount;
cout<<"Deposit successful. New balance is: "<<balance<<endl;
}
void withdrawMoney(float amount) {
if(balance >= amount) {
balance -= amount;
cout<<"Withdrawal successful. New balance is: "<<balance<<endl;
}
else {
cout<<"Insufficient balance."<<endl;
}
}
void resetPin(int newPin) {
pin = newPin;
cout<<"PIN reset successful."<<endl;
}
};
int main() {
ATM myATM;
myATM.setAccountNumber("7061533178");
myATM.setPin(1711);
myATM.setBalance(50000.00);
int option, pin, newPin;
float amount;
string accNumber;
cout<<" $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $"<<endl;
cout<<" $ Welcome to the ATM. $"<<endl;
cout<<" $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ "<<endl;
cout<<"* * * * * * * * * * * * * * * * * * *"<<endl;
cout<<"* Enter your account number: *"<<endl;
cout<<"* * * * * * * * * * * * * * * * * * *"<<endl;
cin>>accNumber;
if(accNumber != myATM.getAccountNumber()) {
cout<<"Invalid account number."<<endl;
return 0;
}
cout<<"* * * * * * * * * * * * * * * * * * *"<<endl;
cout<<"* Enter your PIN: *"<<endl;
cout<<"* * * * * * * * * * * * * * * * * * *"<<endl;
cin>>pin;
if(pin != myATM.getPin()) {
cout<<"Invalid PIN."<<endl;
return 0;
}
cout<<"* * * * * * * * * * * * * * * * * * *"<<endl;
cout<<"* Select an option: *"<<endl;
cout<<"* 1. Check balance *"<<endl;
cout<<"* 2. Deposit money *"<<endl;
cout<<"* 3. Withdraw money *"<<endl;
cout<<"* 4. Reset PIN *"<<endl;
cout<<"* * * * * * * * * * * * * * * * * * *"<<endl;
cin>>option;
switch(option) {
case 1:
myATM.checkBalance();
break;
case 2:
cout<<"Enter the amount to deposit: ";
cin>>amount;
myATM.depositMoney(amount);
break;
case 3:
cout<<"Enter the amount to withdraw: ";
cin>>amount;
myATM.withdrawMoney(amount);
break;
case 4:
cout<<"Enter your new PIN: ";
cin>>newPin;
myATM.resetPin(newPin);
break;
default:
cout<<"Invalid option selected."<<endl;
break;
}
return 0;
}