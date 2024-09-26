/*You are given three classes A, B and C. All three classes implement their own 
version of func. In class A, func multiplies the value passed as a parameter by 2. In 
class B, func multiplies the value passed as a parameter by 3. In class C, func 
multiplies the value passed as a parameter by 5.You are given class D such that You 
need to modify the class D and implement the function update_val which sets D's 
val to new_val by manipulating the value by only calling the func defined in classes 
A, B and C.It is guaranteed that new_val has only 2, 3 and 5 as its prime factors. 
Implement class D's function update_val. This function should update D's val only 
by calling A, B and C's func.
*/

#include<iostream>
using namespace std;
class A{
    public:
    int count2=0;
    void func(int &x){
        x=2*x;
        count2++;
    }
    int get_A(){
        return count2;
    }
};
class B{
    public:
    int count3=0;
    int func(int &x){
        x=3*x;
        count3++;
    }
    int get_B(){
        return count3;
    }
};
class C{
    public:
    int count5=0;
    int func(int &x){
        x=5*x;
        count5++;
    }
    int get_C(){
        return count5;
    }
};
class D:public A,public B,public C
{
    public:
    int t=1;
    void update_value(int new_value){
        while(new_value%2==0){
            A::func(t);
            new_value=new_value/2;
        }
        while(new_value%3==0){
             B::func(t);
            new_value=new_value/3;
        }
        while(new_value%5==0){
             C::func(t);
            new_value=new_value/5;
        }
    }
};
int main(){
    D d1;
    d1.update_value(60);
    cout<<d1.get_A()<<"\t"<<d1.get_B()<<"\t"<<d1.get_C()<<"\t";
}