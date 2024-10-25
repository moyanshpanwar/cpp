#include<iostream>
using namespace std;
int sum(int n){
    if(n<=1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    int sm;
    cout<<"enter the number:";
    cin>>n;
    sm=sum(n);
    cout<<"the sum of"<<" "<<n<<" "<<"numbers is:"<<sm;
    return 0;
}