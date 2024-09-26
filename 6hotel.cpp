/*Q6. Define a class Hotel in C++ with the following specifications 
Private members
• Rno Data member to store room number
• Name Data member to store customer name
• Tariff Data member to store per day charges
• NOD Data member to store number of days of stay
• CALC() Function to calculate and return amount as NOD*Tariff ,and if the value of days* Tariff >10000,
   then total amount is 1.05* days*Tariff.
 Public members
• Checkin() Function to enter the content Rno, Name, Tariff and NOD.
• Checkout() Function to display Rno, Name, Tariff, NOD and Amount (amount to be displayed by calling function) .
*/
#include<iostream>
#include<stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class hotel {
private:
    int Rno, NOD;
    float Tariff;
    string Name;

public:
    void Checkin() {
        cout << "Enter name: ";
        getline(cin, Name);
        cout << "Enter room no: "; cin >> Rno;
        cout << "Enter Tariff: "; cin >> Tariff;
        cout << "Enter NOD: "; cin >> NOD;
        cout << endl;
        cin.ignore();
    }

    float CALC() {
        float amount = Tariff * NOD;
        if (amount < 10000)
            return amount;
        else
            return amount * 1.05;
    }

    void Checkout() {
        float amount = CALC();
        cout << "Name = " << Name << endl;
        cout << "Room no = " << Rno << endl;
        cout << "NOD = " << NOD << endl;
        cout << "Tariff = " << Tariff << endl;
        cout << "Total Amount = " << amount << endl;
    }
};
int main() {
    hotel h1;
    h1.Checkin();
    h1.Checkout();
}
