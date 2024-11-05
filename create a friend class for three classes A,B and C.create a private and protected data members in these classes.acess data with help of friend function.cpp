#include <iostream>
using namespace std;
class A {
   private:
    int a_private;
   protected:
    int a_protected;
   public:
    A() : a_private(10), a_protected(20) {}
    friend void displayData(A&, B&, C&);
};
class B {
   private:
    int b_private;
   protected:
    int b_protected;
   public:
    B() : b_private(30), b_protected(40) {}
    friend void displayData(A&, B&, C&);
};

class C {
   private:
    int c_private;
   protected:
    int c_protected;
   public:
    C() : c_private(50), c_protected(60) {}
    friend void displayData(A&, B&, C&);
void displayData(A& objA, B& objB, C& objC) {
    cout << "class A private data: " << objA.a_private << endl;
    cout << "class A protected data: " << objA.a_protected << endl;
    cout << "class B private data: " << objB.b_private << endl;
    cout << "class B protected data: " << objB.b_protected << endl;
    cout << "class C private data: " << objC.c_private << endl;
    cout << "class C protected data: " << objC.c_protected << endl;
}
int main(){
    A objA;
    B objB;
    C objC;
    displayData(objA, objB, objC);
    return 0;
}
