#include <iostream>
using namespace std;
class NaturalSum {
private:
    int n;
    int sum;
public:
    NaturalSum(int number = 0) : n(number) {
        sum = (n * (n + 1)) / 2;
    }
    void displaySum() {
        cout <<"The sum of the first"<<" "<<n<<" "<<"natural numbers is:"<<sum<<endl;
    }
};
int main() {
    int num;
    cout<<"enter natural number:";
    cin>>num;
    NaturalSum ns1(num);
    ns1.displaySum();
    return 0;
}
