#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int temp,num,digit,power=0;
    int original_num,sum=0;
    cout<<"enter the number:";
    cin>>num;
    original_num=num;
    temp=num;
    while(temp>0){
        temp/=10;
        power++;
    }
    num=original_num;
    while(num>0){
        digit=num%10;
        sum+=pow(digit,power);
        num/=10;
    }
    if(sum==original_num){
        cout<<original_num<<" "<<"is an armstrong number";
    }
    else{
         cout<<original_num<<" "<<"is not an armstrong number";
    }
    return 0;
}