#include <iostream>
using namespace std;
int main(){
    int product,n,i;
    cout<<"enter the number:";
    cin>>n;
    product=1;
    for(i=1;i<=n;i++){
        product*=i;
    }
    cout<<"product of"<<" "<<n<<" "<<"numbers is:"<<product;
    return 0;
}