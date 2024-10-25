#include<iostream>
using namespace std;
int fib(int n){
    if(n<=0){
       return 0;
    }
    else if(n==1){
       return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n,i;
    cout<<"enter the number of terms:";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<fib(i)<<" ";
    }
    cout<<endl;
    cout<<"this fibonacci series of"<<" "<<n<<" "<<"terms";
    return 0;
}