#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the range:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=2;j<=n;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
           cout<<j<<" "<<"is a prime number"<<endl;
        }
    }
    return 0;
}