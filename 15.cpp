#include <iostream>
#include <string>
using namespace std;
class basic_info{
    public:
        string name = "";
        int roll;
        char sex;
        void getdata(void){
            cout <<"Enter Name: ";
            getline(cin,name);
            cout <<"Enter Roll no: ";
            cin>>roll;
            cout<<"Enter sex: ";
            cin>>sex;
        }
        void display(void){
            cout<<"STUDENT NAME: "<<name<<endl
            <<"STUDENT ROLL: "<<roll<<endl
            <<"STUDENT SEX: "<<sex<<endl;
        }
};
class physical_fit: public basic_info{
    public:
    int height;
    int weight;
    void getdata(void){
        cout <<"Enter Name: ";
        getline(cin>>ws,name);
        cout <<"Enter Roll no: ";
        cin>>roll;
        cout<<"Enter sex: ";
        cin>>sex;
        cout <<"Enter height and weight: ";
        cin>>height>>weight;
    }
    void display(){
        cout<<"STUDENT NAME: "<<name<<endl
        <<"STUDENT ROLL: "<<roll<<endl
        <<"STUDENT SEX: "<<sex<<endl
        <<"HEIGHT : "<<height<<endl
        <<"WEIGHT : "<<weight<<endl;
    }
};
int main(){
    basic_info a;
    a.getdata();
    a.display();
    physical_fit b;
    b.getdata();
    b.display();
    return 0;
}