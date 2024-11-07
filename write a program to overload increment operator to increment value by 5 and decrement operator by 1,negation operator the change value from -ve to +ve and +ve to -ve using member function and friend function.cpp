#include <iostream>
using namespace std;
class MyClass{
private:
    int value;
public:
    MyClass(int val):value(val){}
    MyClass operator++(){
        value+= 5;
        return *this;
    }
    MyClass operator--(){
        value-= 1;
        return *this;
    }
    MyClass operator-(){
        value=-value;
        return *this;
    }
    friend MyClass operator++(MyClass &obj, int){
        MyClass temp = obj;
        obj.value += 5;
        return temp;
    }
    friend MyClass operator--(MyClass &obj, int){
        MyClass temp = obj;
        obj.value -= 1;
        return temp;
    }
    friend MyClass operator-(MyClass &obj){
        obj.value = -obj.value;
        return obj;
    }
    void display(){
        cout<<"Value: "<<value<<endl;
    }
};
int main(){
    MyClass obj(10);
    cout<<"Original value: ";
    obj.display();
    ++obj;
    obj.display();
    --obj;
    obj.display();
    -obj;
    obj.display();
    obj++;
    obj.display();
    obj--;
    obj.display();
   -obj;
    obj.display();
    return 0;
}

