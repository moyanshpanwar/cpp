#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any number:";
    cin>>num;
    if(num>0){
        cout<<num<<" "<<"is a positive number";
    }
    else if(num<0){
        cout<<num<<" "<<"is a negative number";
    }
    else if(num==0){
        cout<<num<<" "<<"is zero";
    }
    return 0;
}