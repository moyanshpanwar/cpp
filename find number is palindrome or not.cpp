#include<iostream>
using namespace std;
int main(){
    int num,original_num,remainder;
    int reversednum;
    cout<<"enter any number:";
    cin>>num;
    original_num=num;
    while(num>0){
        remainder=num%10;
        reversednum=reversednum*10+remainder;
        num/=10;
    }
    if(reversednum==original_num){
        cout<<original_num<<" "<<"is a palindrome number";
    }
    else{
         cout<<original_num<<" "<<"is not a palindrome number";
    }
    return 0;
}