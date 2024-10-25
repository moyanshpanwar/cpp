#include<iostream>
using namespace std;
class myclass{
    public:
       void message(){
            cout<<"this is btech 2nd year"<<endl;
       }
       void second();
};
void myclass::second(){
    cout<<"this is btech"<<endl;
}
int main(){
    myclass obj;
    cout<<"message by inside function:";
    obj.message();
    cout<<"message by outside function:";
    obj.second();
    return 0;
}