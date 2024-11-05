#include <iostream>
using namespace std;
class Sum {
public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    int add(int a,int b,int c,int d){
        return a+b+c+d;
    }
};
int main(){
    Sum sumObj;
    int result1 = sumObj.add(10,20);
    int result2 = sumObj.add(10,20,30);
    int result3 = sumObj.add(10,20,30,40);
    cout<<"Sum of two numbers:"<< result1<<endl;
    cout<<"Sum of three numbers:"<< result2<<endl;
    cout<<"Sum of four numbers:"<< result3<<endl;
    return 0;
}
