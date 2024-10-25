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
int isprime(int num){
    int i;
    if(num<=3){
        cout<<num<<" "<<"is a prime number"<<endl;
        return 0;
    }
    else if(num%2==0 || num%3==0){
        cout<<num<<" "<<"is a composite number"<<endl;
        return 0;
    }
    for(i=5;i*i<=num;i++){
        if(num%i==0 || num%(i+2)==0){
           cout<<num<<" "<<"is a composite number"<<endl;
           break; 
        }
        else{
            cout<<num<<" "<<"is a prime number"<<endl;
            break;
        }
    }
    return 0;
}
int main(){
    int num,op;
    cout<<"enter any number:";
    cin>>num;
    cout<<"choose your operation"<<endl;
    cout<<"1 --> for odd/even"<<endl;
    cout<<"2 --> for prime/composite"<<endl;
    cout<<"enter operation:";
    cin>>op;
    switch(op){
        case 1:
            iseven(num);
            break;
        case 2:
            isprime(num);
            break;    
        default:
            cout<<"invalid operator";
            break;    
    }
    return 0;
}