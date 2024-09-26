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