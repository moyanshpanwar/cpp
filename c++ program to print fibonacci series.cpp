#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n3=0;
    int i,n;
    cout<<"enter the number of terms:";
    cin>>n;
    for(i=1;i<=n;i++){
        n3=n1+n2;
        n2=n1;
        n1=n3;
        cout<<n3<<" ";
    }
    cout<<endl;
    cout<<"this is fibonacci series of"<<" "<<n<<" "<<"terms";
    
    return 0;
}