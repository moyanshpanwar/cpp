#include <iostream>
using namespace std;
class Student{
private:
    string name;
    int age;
    string department;
    string course; 
public:
    Student(string n, int a, string dep, string crs) : name(n), age(a), department(dep), course(crs) {}
    friend void displayStudentDetails(const Student& s);
};
void displayStudentDetails(const Student& s) {
    cout <<"Student name:"<<s.name<<endl;
    cout <<"Age:"<<s.age<<endl;
    cout <<"Department:"<<s.department<<endl;
    cout <<"Course:"<<s.course<<endl;
}
int main(){
    Student student("Moyansh",19,"Computer Science","C++ programming");
    displayStudentDetails(student);
    return 0;
}
