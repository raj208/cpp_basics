#include<iostream>
using namespace std;

class Employee
{
    private:
    int a,b,c;
    public:
    int x,y;
    // int sum(int x, int y){
    //     return x+y;
    
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of x is "<<x<<endl;
        cout<<"The value of y is "<<y<<endl;
    }
};

void Employee :: setData(int a1,  int b1, int c1){
    a = a1;
    b = b1;
    c = c1;

}
int main(){
    Employee harry;
    harry.x = 1;
    harry.y = 2;
    harry.setData(8,9,10);
    harry.getData();
    return 0;
}