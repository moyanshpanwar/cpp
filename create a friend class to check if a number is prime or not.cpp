#include <iostream>
using namespace std;
class PrimeChecker;
class Student{
private:
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}
    friend class PrimeChecker;
};
class PrimeChecker{
public:
    static bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }
};
int main() {
    Student student("moyansh", 20);
    int num=29;
    if (PrimeChecker::isPrime(num)) {
        cout<<num<<" "<<"is a prime number"<<endl;
    } else {
        cout<<num<<" "<<"is not a prime number"<<endl;
    }
    return 0;
}
