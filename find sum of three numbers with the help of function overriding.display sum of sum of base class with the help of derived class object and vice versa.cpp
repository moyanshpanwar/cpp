#include <iostream>
using namespace std;
class Base{
  public:
    virtual int sum(int a,int b,int c){
        return a+b+c;
    }
};
class Derived:public Base{
  public:
    int sum(int a,int b,int c) override{
        return a+b+c+10;
    }
};
int main(){
    Base* basePtr;
    Derived derivedObj;
    basePtr=&derivedObj;
    cout<<"Sum using derived class object: "<<basePtr->sum(5,10,15)<<endl;
    cout<<"Sum using base class object: "<<derivedObj.Base::sum(5, 10, 15)<<endl;
    return 0;
}
