#include <iostream>
using namespace std;
class base{
protected:
    int num1;
    int num2;
public:
    base(int a, int b) : num1(a), num2(b) {}
};
class derived1 : public base {
public:
    derived1(int a, int b):base(a, b) {}
    void display1() {
        cout<<"First number is:"<<num1<<endl;
    }
};
class derived2 : public base {
public:
    derived2(int a, int b):base(a, b) {}
    void display2() {
        cout<<"Second number is:"<<num2<<endl;
    }
};
int main() {
    derived1 obj1(5, 7);
    obj1.display1();
    derived2 obj2(10, 20);
    obj2.display2();
    return 0;
}
