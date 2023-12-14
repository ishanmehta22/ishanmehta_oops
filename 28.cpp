#include <iostream>
#include <fstream>
using namespace std;
class student_info{
public:
    string name, age, height, weight;
    char sex;
    void read();
    string write();
};
void student_info :: read(){
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Gender(F/M): ";
    cin >> sex;
    cout << "Enter Height: ";
    cin >> height;
    cout << "Enter Weight(kilogram): ";
    cin >> weight;
}
string student_info :: write(){
    return "Name: " + name + "\n" + "Age: " + age + "\n" + "Gender: " + sex + "\n" + "Height: " + height + "\n" + "Weight: " + weight + "\n" + "\n";
}
int main(){
    int n;
    cout << "Enter how many records are to be stored: ";
    cin >> n;
    student_info student[n];
    ofstream output;
    output.open("white.txt", ios::app);
    // output.write()
    for (int i = 0; i < n; i++){
        student[i].read();
        // output.write(student, sizeof(student[i]));
        output << student[i].write();
    }
    output.close();
    ifstream fin;
    cout << "..............DISPLAYING THE CONTENTS OF THE FILE..........." << endl;
    fin.open("according_9.txt");
    string input;
        for(int i = 0; i < n; i++){
        while(getline(fin, input)){
            cout << input << endl;
        }
    }
    fin.close();
    return 0;
}