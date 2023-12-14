#include <iostream>
using namespace std;
template <typename T>
void display(T value) {
    cout << "Displaying a single value: " << value << std::endl;
}

// Template function with two parameters
template <typename T, typename U>
void display(T value1, U value2) {
    cout << "Displaying two values: " << value1 << " and " << value2 << endl;
}

int main() {
    display(42);
    display("Hello", 3.14);
    return 0;
}
