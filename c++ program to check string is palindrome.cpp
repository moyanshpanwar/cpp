#include<iostream>
#include<string>
using namespace std;
bool palindrome(const string&str){
    int left=0;
    int right=str.length()-1;
    while(left==right){
        left++;
        right--;
    }
    return true;
}
int main(){
    string input;
    cout<<"enter the string:";
    getline(cin,input);
    if(palindrome(input)){
        cout<<"this string is palindrome";
    }
    else{
       cout<<"this string is not palindrome"; 
    }
    return 0;
}