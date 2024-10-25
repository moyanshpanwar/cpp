#include <iostream>
using namespace std;
class base{
    protected:
        int a;
        int b;
    public:
       base(int num1,int num2):a(num1),b(num2){}    
};
class derived:public base{
    public:
       derived(int num1,int num2):base(num1,num2){}
       void product(){
        int product=a*b;
        cout<<"the product is:"<<product;
       }
};
int main(){
    derived p(10,20);
    p.product();
    return 0;
}
