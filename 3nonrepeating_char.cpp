/*Q3.Implement a C++ program to find the non-repeating characters in string.*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str[100];
int b[100],j,i;
for(i=0;i<100;i++) 
     b[i]=0;
cout<<endl<<"enter the string : ";        		
gets(str);
for(i=0;str[i]!='\0';i++)
{
    for(j=i+1;str[j]!='\0';j++)
    {
        if(str[i]==str[j])
        {
            b[j]++;
            b[i]++;
            break;
        }
    }
}
cout<<"non repeating characters are : ";
for(i=0;i<strlen(str);i++)
{
    if(b[i]==0)
        cout<<" "<<str[i];
}
}
