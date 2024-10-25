#include <iostream>
using namespace std;
class base1 {
protected:
    int num1;
public:   
    base1(int a):num1(a) {}
};
class base2:public base1 {
protected:
    int num2;
public:   
    base2(int a,int b):base1(a),num2(b) {}
};
class derived : public base2 {
public:
    derived(int a,int b):base2(a,b) {}
    void sum() {
        int sum = num1+num2;
        cout<< "The sum is: "<<sum<< endl;
    }
};
int main() {
    derived obj(10, 20);
    obj.sum();
    return 0;
}
