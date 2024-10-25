#include<iostream>
using namespace std;
class calsum{
    public:
       calsum(int a,int b){
        cout<<"sum of int "<<a<<" "<<"and"<<" "<<b<<" "<<"is:"<<a+b<<endl;
       }   
       calsum(float a,float b){
        cout<<"sum of float "<<a<<" "<<"and"<<" "<<b<<" "<<"is:"<<a+b<<endl;
       }
       calsum(char a,char b){
        cout<<"sum of char "<<a<<" "<<"and"<<" "<<b<<" "<<"is:"<<int(a)+int(b)<<endl;
       }
};
int main(){
    calsum s1(5,80);
    calsum s2(44.1f,80.7f);
    calsum s3('S','U');
    return 0;
}