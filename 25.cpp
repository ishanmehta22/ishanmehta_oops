#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string input;
    ofstream output("beyond_18.txt");
    cout << "Enter the lines you want to add in the file:\nEnter 'end' when you want to stop!\n";
    do{
        getline(cin, input);
        if(input != "end"){
            output << input;
            output << "\n";
        }
    }while(input != "end");
    return 0;
}