#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string input;
    ifstream in("beyond_19.txt");
    while(getline(in, input)){
        cout << input << endl;
    }
    in.close();
    return 0;
}