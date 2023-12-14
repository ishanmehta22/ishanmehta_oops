#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string input;
    ifstream source("beyond_20_1.txt");
    ofstream destination("beyond_20_2.txt");
    cout << "Copying files from beyond_20_1.txt to beyond_20_2.txt\n";
    while(getline(source, input)){
        cout << input << endl;
        destination << input;
        destination << "\n";
    }
    source.close();
    destination.close();
    return 0;
}