#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    long product;
    cout<<"enter the number:";
    cin>>n;
    product=fact(n);
    cout<<"the factorial of"<<" "<<n<<" "<<"is:"<<product;
    return 0;
}