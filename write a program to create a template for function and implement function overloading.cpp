#include <iostream>
using namespace std;
template <typename T>
T add(T a,T b) {
    return a+b;
}
template <typename T>
T subtract(T a,T b) {
    return a-b;
}
template <typename T>
T multiply(T a,T b) {
    return a*b;
}
int add(int a,int b) {
    return a+b;
}
float add(float a,float b) {
    return a+b;
}
double add(double a,double b) {
    return a+b;
}
int main(){
    int intResult = add(10, 20);
    float floatResult = add(10.5f, 20.5f);
    double doubleResult = add(10.5, 20.5);
    int subtractResult = subtract(10, 5);
    float multiplyResult = multiply(10.5f, 2.0f);
    cout<<"Integer addition: " <<intResult<<endl;
    cout<<"Float addition: " <<floatResult<<endl;
    cout<<"Double addition: " <<doubleResult<<endl;
    cout<<"Integer subtraction: " <<subtractResult<<endl;
    cout<<"Float multiplication: " <<multiplyResult<<endl;
    return 0;
}
