#include<iostream>
#include<stdlib.h>
using namespace std;
class student{
    string name;
    int age;
    public:
    student(){
        cout<< "Constructor is called\n" ;
    }
    student(string name, int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<< "Name:" << name << endl;
        cout<< "Age:" << age << endl;
    }
    void * operator new(size_t size){
        cout<< "New operator overloaded "<< endl;
        void * p = ::operator new(size);
        return p;
    }
    void operator delete(void * p){
        cout<< "Delete operator overloaded" << endl;
        free(p);
    }
};
int main(){
    student * p = new student("abc", 123);
    p->display();
    delete p;
    return 0;
}