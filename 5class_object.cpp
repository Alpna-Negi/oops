/*Q5.Implement a C++ program to demonstrate the concept of data abstraction using the concept of Class and Objects*/

#include<iostream>
using namespace std;
class Object
{
private:
    int x;
public:
    int a;
    void get()
    {
    cout<<"enter value for private member(x): ";
    cin>>x;
    }
    void show()
    {
        cout<<"this is a private member accessed by class function: "<<x<<endl;
    }
};
int main()
{
   Object o;
   cout<<"\nenter value public member(a): ";  cin>>o.a;
   o.get();
   cout<<"this is a public member accessed by object name: "<<o.a<<endl;
   o.show();
}
