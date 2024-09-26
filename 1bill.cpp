/*Q1. An electricity board charges the following rates to domestic users to discourage large consumption of energy. 
For the first 100 units: - 60 P per unit For the next 200 units: -80 P per unit Beyond 300 units: -90 P per unit 
All users are charged a minimum of Rs 50 if the total amount is more than Rs 300 then an additional surcharge of 15% is added.
Implement a C++ program to read the names of users and number of units consumed and display the charges with names.*/

#include<iostream>
using namespace std;
class data{
    public:
    string name;
    int unit;
    float total;
    void calculate(){
        if(unit<=100){
            total=.60*unit;
        }
        else if(unit<=300){
            total=.80*unit;
        }
        else{
            total=.90*unit;
        }
        if(total>300){
            total=total*15/100+50;
        }
    }
};
int main(){
    int n,i;
    cout<<"Enter the no. of users:";
    cin>>n;
    data a[n];
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<"Enter details of user "<<i+1<<endl;
        cout<<"name=";
        cin>>a[i].name;
        cout<<"units=";
        cin>>a[i].unit;
    }
    cout<<"charges of each user are:\n";
    for(i=0;i<n;i++){
        a[i].calculate();
        cout<<a[i].name<<"\t"<<a[i].total<<endl;
    }
    return 0;
}
