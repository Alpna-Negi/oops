/*Q2. Construct a C++ program that removes a specific character from a given string and return the updated string.*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char n[100],ch;
    cout<<"Enter a string: ";
    cin>>n;
    cout<<"Enter the specific character to remove: ";
    cin>>ch;
    for(int i=0;n[i]!=NULL;i++){
        if(n[i]==ch){
            for(int j=i;n[j]!=NULL;j++){
                n[j]=n[j+1];
            }
        }
    }
    cout<<"Updated string is: ";
    cout<<n;
    return 1;
}
