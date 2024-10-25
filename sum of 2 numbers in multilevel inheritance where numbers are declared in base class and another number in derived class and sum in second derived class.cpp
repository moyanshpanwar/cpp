#include <iostream>
using namespace std;
class Base {
protected:
    int num1, num2;
public:
    Base(int n1, int n2) : num1(n1), num2(n2) {}
};
class Derived : public Base {
protected:
    int num3;
public:
    Derived(int n1, int n2, int n3) : Base(n1, n2), num3(n3) {}
};
class SecondDerived : public Derived {
public:
    SecondDerived(int n1, int n2, int n3) : Derived(n1, n2, n3) {}
    int sumNumbers() {
        return num1 + num2 + num3;
    }
};
int main() {
    SecondDerived obj(10, 20, 30);
    cout << "The sum of the numbers is: " << obj.sumNumbers() << endl;
    return 0;
}
