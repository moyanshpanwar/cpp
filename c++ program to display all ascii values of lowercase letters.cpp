#include<iostream>
using namespace std;
int main(){
    char i;
    cout<<"the ascii values of all lowercase letters are:"<<endl;
    for(i='a';i<='z';i++){
        cout<<i<<"-->"<<int(i)<<endl;
    }
    return 0;
}