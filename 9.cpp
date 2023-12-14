#include<iostream>
using namespace std;
class A {
    public:
    int num1;
    int num2;
};
void display(A val){
    cout<<"VALUE OF 1st NUMBER IS : "<<val.num1<<endl;
    cout<<"VALUE OF 2nd NUMBER IS : "<<val.num2<<endl;
}
void printsum(A val){
    int sum = val.num1 + val.num2;
    cout<<"THE SUM OF NUMBERS IS : "<<sum<<endl;
}
int main(){
    A values;
    values.num1=12;
    values.num2=18;
    display(values);
    printsum(values);
}