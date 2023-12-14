#include <iostream>
using namespace std;
class A{
    int x;
    public:
    A(int z){
        this->x=z;
    }
    void operator ++(){
        x +=1;
    }
    void display(void){
        cout<<x<<endl;
    }
};
int main(){
    A a(5);
    a.display();
    ++a;
    a.display();
    return 0;
}