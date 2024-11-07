#include <iostream>
using namespace std;
class MyClass {
private:
    int value;
public:
    MyClass(int val):value(val){}
    MyClass operator+(const MyClass &obj) {
        return MyClass(value+obj.value);
    }
    MyClass operator-(const MyClass &obj) {
        return MyClass(value-obj.value);
    }
    friend MyClass operator+(const MyClass &obj1, const MyClass &obj2) {
        return MyClass(obj1.value+obj2.value);
    }
    friend MyClass operator-(const MyClass &obj1, const MyClass &obj2) {
        return MyClass(obj1.value-obj2.value);
    }
    void display() const{
        cout<<"Value: "<<value<<endl;
    }
};
int main(){
    MyClass obj1(10),obj2(20);
    MyClass result=obj1+obj2;
    cout<<"Sum using member function: ";
    result.display();
    result=obj1-obj2;
    cout<<"Difference using member function: ";
    result.display();
    result=obj1+obj2;
    cout<<"Sum using friend function: ";
    result.display();
    result= obj1-obj2;
    cout<<"Difference using friend function: ";
    result.display();
    return 0;
}


