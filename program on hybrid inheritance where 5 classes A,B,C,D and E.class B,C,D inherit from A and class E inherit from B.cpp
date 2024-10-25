#include<iostream>
using namespace std;
class A{
    protected:
       int data;
    public:
       A(int val):data(val){}   
       void displayA(){
        cout<<"data in class A:"<<data<<endl; 
       }
};
class B:public A{
    public:
       B(int val):A(val){}
       void displayB(){
        cout<<"data in class B:"<<data<<endl; 
       }
};
class C:public A{
    public:
       C(int val):A(val){}
       void displayC(){
        cout<<"data in class C:"<<data<<endl; 
       }
};
class D:public A{
    public:
       D(int val):A(val){}
       void displayD(){
        cout<<"data in class D:"<<data<<endl; 
       }
};
class E:public B{
    public:
       E(int val):B(val){}
       void displayE(){
        cout<<"data in class E:"<<data<<endl; 
       }
};
int main(){
    A objA(10);
    objA.displayA();
    B objB(20);
    objB.displayB();
    C objC(30);
    objC.displayC();
    D objD(40);
    objD.displayD();
    E objE(50);
    objE.displayE();
    return 0;
}
