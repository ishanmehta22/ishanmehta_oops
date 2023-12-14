#include <iostream>
using namespace std;
class Number{
    int N; public:
    Number(){
        N = 0;
    }
    Number(int X){
        N = X;
    }
    int max(Number A){
        if (N > A.N)
        return N; else
        return A.N;
    }
    ~Number(){
        cout << "Destructor working.\n";
    }
};
int main(){
    int a, b;
    cout << "Enter two numbers: "; cin >> a >> b;
    Number A(a);
    Number B(b);
    cout << "Larger of two numbers is: " << A.max(B) << "\n";
    return 0;
}