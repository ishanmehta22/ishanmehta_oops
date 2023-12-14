#include<iostream>
using namespace std;
class Shapes{
public:
    int area(int r){
        //circle
        int ar=3.14*r*r;
        return ar;
    }
    int area (int l, int b){
        //rectangle
        int ar=l*b;
        return ar;
    }
    double area(double b,double h){
        //triangle
        double ar=0.5*b*h;
        return ar;
    }

};
int main(){
    Shapes s;
    cout<<"AREA OF CIRCLE WITH RADIUS = 3 IS : ";
    cout<<s.area(3)<<endl;
    cout<<"AREA OF RECTANGLE WITH LENGTH=2 AND WIDTH=3 IS : ";
    cout<<s.area(2,3)<<endl;
    cout<<"AREA OF TRIANGLE WITH BASE =3.3 AND HEIGHT =4.1 IS : ";
    cout<<s.area(3.3,4.1)<<endl;
    cout<<"ISHAN MEHTA"<<endl;
    return 0;
}