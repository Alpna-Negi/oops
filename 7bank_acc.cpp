/*Q7.Implement a Program in C++ by defining a class to represent a bankaccount.Include the following:

Data Members
● Name of the depositor
● Account number
● Type of account (Saving, Current etc.)
● Balance amount in the account

Member Functions
● To assign initial values
● To deposit an amount
● To withdraw an amount after checking the balance
● To display name and balance
*/
#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    int AccountNo, Balance;
    string Type;
    string Name;

public:
    void Data() {
        cout << "Enter name: ";
        getline(cin, Name);
        cout << "Enter Account no: "; cin >> AccountNo;
        cout << "Enter Account Type: "; cin >> Type;
        cout << "Enter Balance: "; cin >> Balance;
        cout << endl;
        cin.ignore();
    }

    void deposit() {
        float amount;
        cout << "Enter the deposit amount: ";
        cin >> amount;
        Balance += amount;
    }

    void withdraw() {
        int amount;
        cout << "Current balance: " << Balance;
        cout << "\tEnter the withdraw amount: ";
        cin >> amount;
        if (amount > Balance) {
            cout << "***You don't have enough balance***" << endl;
        } else {
            Balance -= amount;
            cout << "****Withdraw successful****" << endl;
        }
    }

    void display() {
        cout << "Name = " << Name << "\tBalance = " << Balance << endl;
    }
};

int main() {
    Bank b1;
    int o = 1;
    b1.Data();
    cout << "****MAIN MENU****" << endl;
    cout << "1.Deposit\t\t\t\t2.Withdraw" << endl;
    cout << "3.Display\t\t\t\t4.Exit" << endl;
    
    while (o != 4) {
        cout << "\nEnter option: ";
        cin >> o;
        switch (o) {
            case 1: b1.deposit(); break;
            case 2: b1.withdraw(); break;
            case 3: b1.display(); break;
            case 4: break;
            default: cout << "\nInput the correct option" << endl;
        }
    }
}
