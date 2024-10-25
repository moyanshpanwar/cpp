#include<iostream>
using namespace std;
int iseven(int num){
    if(num%2==0){
        cout<<num<<" "<<"is an even number";
    }
    else{
       cout<<num<<" "<<"is an odd number"; 
    }
    return 0;
}
int main(){
    int num,op;
    cout<<"enter any number:";
    cin>>num;
    cout<<"enter 1 to find number is even or odd:";
    cin>>op;
    switch(op){
        case 1:
            iseven(num);
            break;
        default:
            cout<<"invalid operator";
            break;    
    }
    return 0;
}