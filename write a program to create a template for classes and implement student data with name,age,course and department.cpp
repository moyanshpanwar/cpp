#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Student{
private:
    T name;
    T age;
    T course;
    T department;
public:
    Student(T name, T age, T course, T department){
        this->name=name;
        this->age=age;
        this->course=course;
        this->department=department;
    }
    void display(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"Department: "<<department<<endl;
    }
};
int main(){
    Student<string>student1("Moyansh", "19", "Computer Science", "Engineering");
    cout<<"Student 1 using string data types:"<<endl;
    student1.display();
    return 0;
}
