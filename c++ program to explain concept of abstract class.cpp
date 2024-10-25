#include<iostream>
using namespace std;
class animal{
    public:
        virtual void sound() const=0;
        void sleep() const{
            cout<<"the animal is sleeping"<<endl;
        }
};
class dog:public animal{
    public:
        void sound() const override{
            cout<<"woof! woof!"<<endl;
        }
};
class cat:public animal{
    public:
        void sound() const override{
            cout<<"meow! meow!"<<endl;
        }
};
int main(){
    dog dog;
    cat cat;
    dog.sound();
    dog.sleep();
    cat.sound();
    cat.sleep();
    return 0;
}