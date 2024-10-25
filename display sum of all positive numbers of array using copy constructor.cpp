#include<iostream>
using namespace std;
class arrsum{
    private:
       int sum;
    public:
       arrsum(int arr[],int size){
        sum=0;
        for(int i=0;i<size;i++){
            if(arr[i]>0){
                sum+=arr[i];
            }
        }
       }
    int getsum()const{
        return sum;
    }
};
int main(){
    int arr[]={1,-6,8,9,-2};
    int size=sizeof(arr)/sizeof(arr[0]);
    arrsum arrsum(arr,size);
    cout<<"sum of the array is:"<<arrsum.getsum();
    return 0;
}