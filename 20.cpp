#include <iostream>
using namespace std;
template <class T> T square(T x){
    return x * x;
}
int main(){
    int n1;
    float n2;
    double n3;
    cout << "Enter the values of n1(int), n2(float) and n3(double): ";
    cin >> n1 >> n2 >> n3;
    cout << "n1^2 = " << square <int> (n1) << endl;
    cout << "n2^2 = " << square <float> (n2) << endl;
    cout << "n3^2 = " << square <double> (n3) << endl;
    return 0;
}