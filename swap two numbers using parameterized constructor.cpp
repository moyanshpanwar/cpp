#include <iostream>
using namespace std;
class SwapNumbers {
private:
    int a;
    int b;
public:
    SwapNumbers(int num1,int num2):a(num1),b(num2){}
    void swap(){
        this->a=this->a+this->b;
        this->b=this->a-this->b;
        this->a=this->a-this->b;
    }
    void display(){
        cout<<"a:"<< this->a<<endl<<"b:"<<this->b<<endl;
    }
};
int main() {
    SwapNumbers nums(5,10);
    cout <<"Before swapping:"<<endl;
    nums.display();
    nums.swap();
    cout <<"After swapping:"<<endl;
    nums.display();
    return 0;
}
