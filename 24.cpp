#include <iostream>
using namespace std;
template <typename T>
class SumCalculator {
private:
    T item1;
    T item2;

public:
    SumCalculator(const T& i1, const T& i2) : item1(i1), item2(i2) {}
    T calculateSum() const {
        return item1 + item2;
    }
};

int main() {
    int a, b;
    cout<<"ENTER TWO INTEGER NUMBERS : ";
    cin>>a>>b;
    SumCalculator<int> intCalculator(a,b);
    cout << "Sum of two integers: " << intCalculator.calculateSum() <<endl;
    double x, y;
    cout<<"ENTER TWO DOUBLES NUMBERS : ";
    cin>>x>>y;
    SumCalculator<double> doubleCalculator(x, y);
    cout << "Sum of two doubles: " << doubleCalculator.calculateSum() <<endl;
    return 0;
}
