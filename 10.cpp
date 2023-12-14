#include <iostream>
using namespace std;
class Fibonacci
{
    int F;
    public:
    Fibonacci(){
        F = 0;
    }
    Fibonacci(const Fibonacci &f){
        F = f.F;
    }
    int fibonacci(int N){
        F = (N <= 1 ? N : fibonacci(N-1) + fibonacci(N-2));
        return F;
    }
    void print(){
        cout << F << " ";
    }
};
int main(){
    cout << "Enter the number of terms: "; int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        Fibonacci X;
        X.fibonacci(i);
        Fibonacci F(X);
        F.print();
    }
    cout << "\n";
    return 0;
}