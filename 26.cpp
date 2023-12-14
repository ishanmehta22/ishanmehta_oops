#include <iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream prev("white.txt");
    ofstream next("black.txt");
    char ch;
    int c = prev.peek();
    while(!prev.eof()){
        ch= prev.get();
        if(ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' || ch == '\f' || ch == '\v'||ch=='\0'){}
        else{
            next.put(ch);
        }
        c = prev.peek();
    }
    cout << "Program Executed" << endl;
    return 0;
}