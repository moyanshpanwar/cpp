#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    Student(string n, int a) : name(n), age(a) {}
    static inline int sum(int a, int b) {
        return a+b;
    }
};
int main(){
    Student student("moyansh", 20);
    cout<<"The sum of the numbers is:"<<Student::sum(5, 7)<<endl;
    return 0;
}
