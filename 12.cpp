#include <iostream>
#include<string.h>
using  namespace std;
class String {
private:
    char* data;

public:
    // Constructor
    String(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // Copy constructor
    String(const String& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    // Destructor
    ~String() {
        delete[] data;
    }

    // Overload + operator for string concatenation
    String operator+(const String& other) const {
        char* result = new char[strlen(data) + strlen(other.data) + 1];
        strcpy(result, data);
        strcat(result, other.data);
        String concatenatedString(result);
        delete[] result;
        return concatenatedString;
    }

    // Overload = operator for string copy
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    // Overload <= operator for string comparison
    bool operator<=(const String& other) const {
        return strcmp(data, other.data);
    }

    // Function to display the length of the string
    int length() const {
        return strlen(data);
    }

    // Function to convert to lowercase
    void tolower() {
        for (int i = 0; data[i]; i++) {
            data[i] = std::tolower(data[i]);
        }
    }

    // Function to convert to uppercase
    void toupper() {
        for (int i = 0; data[i]; i++) {
            data[i] = std::toupper(data[i]);
        }
    }

    // Function to display the string
    void display() const {
        cout << data <<endl;
    }
};

int main() {
    String str1("Hello");
    String str2("world");

    // Concatenation using the + operator
    String str3 = str1 + str2;
    str3.display(); // Output: Helloworld

    // Copy using the = operator
    String str4 = str1;
    str4.display(); // Output: Hello

    // Comparison using the <= operator
    if (str1 <= str2) {
        cout << "str1 is less than or equal to str2." <<endl;
    } else {
        cout << "str1 is greater than str2." <<endl;
    }

    // Length of a string
    int len = str1.length();
    cout << "Length of str1: " << len <<endl;

    // Convert to lowercase
    str1.tolower();
    str1.display(); // Output: hello

    // Convert to uppercase
    str1.toupper();
    str1.display(); // Output: HELLO

    return 0;
}
