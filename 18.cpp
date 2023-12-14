#include <iostream>
using namespace std;
class SHAPE{
    double para1, para2;
    public:
    void get_para(){
        cin >> para1 >> para2;
    }
    double put_para1(){
        return para1;
    }
    double put_para2(){
        return para2;
    }
    virtual void display(){}
};
class TRIANGLE : public SHAPE{
    public:
    void get_data(){
        cout << "Enter the base and height of the triangle: ";
        get_para();
    }
    void display(){
        double area = 0.5 * put_para1() * put_para2();
        cout << "Area of the triangle: " << area << endl;
    }
};
class RECTANGLE : public SHAPE{
    public:
    void get_data(){
        cout << "Enter the lenght and breadth of the rectangle: ";
        get_para();
    }
    void display(){
        double area = put_para1() * put_para2();
        cout << "Area of the rectangle: " << area << endl;
    }
};
int main(){
    TRIANGLE t;
    RECTANGLE r;
    bool running = true;
    while(running){
        int choice;
        cout << "\n\n1. Triangle\n2. Rectangle\n3. Exit\nEnter you choice: ";
        cin >> choice;
        if(choice == 1){
            t.get_data();
            t.display();
        }
        else if(choice == 2){
            r.get_data();
            r.display();
        }
        else if(choice == 3){
            running = false;
        }
        else{
            cout << "Enter a valid choice! Try again!\n";
        }
    }
    return 0;
}