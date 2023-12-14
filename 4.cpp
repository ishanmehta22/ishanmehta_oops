#include<iostream>
using namespace std;
class Students{

public:
    char name[20];
    int roll;
    int age;
    char branch[5];
    int subject[5];
    double percentage;
    void getdata(int q){
        cout<<"ENTER THE DETAILS OF STUDENT "<<q<<endl;
        cout<<"ENTER YOUR NAME : ";
        cin>>name;
        cout<<"ENTER YOUR ROLL NO. : ";
        cin>>roll;
        cout<<"ENTER YOUR AGE : ";
        cin>>age;
        cout<<"ENTER YOUR BRANCH : ";
        cin>>branch;
        double sum=0;
        for(int i=0;i<5;i++){
            cout<<" Enter  marks of Subject "<<(i+1)<<"(out of 100): ";
            cin>>subject[i];
            sum=sum+subject[i];
            
        }
        percentage=(sum/500)*100;
    }    

};
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF STUDENTS: ";
    cin>>n;
    Students s[n];
    for(int i=0;i<n;i++){
        int x=i+1;
        s[i].getdata(x);
    }
    for(int i=0;i<n;i++){
        if((s[i].percentage)>=70){
            cout<<"STUDENT "<<(i+1)<<" have more than equal to 70% marks."<<endl;
        }
    }
    return 0;
}