#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;
    public:
    void initializeAccount(string name, int accNumber,string accType,double initialBalance){
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount){
        if(amount>0){
            balance = balance + amount;
            cout<<"deposited:"<<amount<<endl<<"new balance:"<<balance<<endl;
            }
            else {
                cout<<"invalid deposit amount:"<<endl;
            }
        }

        void withdraw(double amount){
            if (amount>balance){
                cout<<"insufficient balance:"<<endl;
            }
            else if(amount>0){
                balance= balance-amount;
                cout<<"withdrawn:"<<amount<<endl<<"new balance:"<<balance<<endl;
            }
            else {
                cout<<"invalid withdrawal amount:"<<endl;
            }
            
            }
              
        void display(){
            cout<<"depositor name:"<<depositorName<<endl;
            cout<<"account number:"<<accountNumber<<endl;
            cout<<"account type:"<<accountType<<endl;
            cout<<"balance:"<<balance<<endl;
        }
        };

        int main(){
            BankAccount account;
            account.initializeAccount("alpna",123456,"savings",1000);
            account.display();
            account.deposit(500);
            account.withdraw(1500);
            account.display();
            return 0;
        }
    


