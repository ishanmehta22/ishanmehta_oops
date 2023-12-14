#include <iostream>
using namespace std;
class MyClass {
    private:
        int data;

    public:
        MyClass(int value) : data(value) {}

        friend void displayData(const MyClass& obj);
};

void displayData(const MyClass& obj) {
    cout << "Data from MyClass: " << obj.data << endl;
}

int main() {
    MyClass obj(42);
    displayData(obj);
    return 0;
}