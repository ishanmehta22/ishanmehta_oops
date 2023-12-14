#include<iostream>
using namespace std;
class a{
    public:
    int number;
    a(int x)
    {
        number=x;
    }
};
class b{
    public:
    int number;
    b(int x)
    {
        number=x;
    }
};
void greatest(a a1,b b1)
{
    if(a1.number>b1.number)
    {
        cout<<"\n Number in class A is greatest i.e. "<<a1.number;
    }
    else if(a1.number<b1.number)
    {
        cout<<"\n Number in class B is greatest i.e. "<<b1.number;
    }
    else
    {
        cout<<"\n Number in both classes are equal";
    }
}
int main(){
    int num;
 
    cout<<"Enter number for class A - ";
    cin>>num;
    a a1(num);
    cout<<"\n";
    cout<<"\n Enter number for class B - ";
    cin>>num;
    b b1(num);
    cout<<"\n";
    greatest(a1,b1);
    cout<<"\n";
 
    return 0;
}