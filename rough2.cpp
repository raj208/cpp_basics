#include<iostream>
using namespace std;

class calc{
    int a;
    int b;
    public:
    int sum();
    int subtract();
    int multiply();
    int divide();
    void displayCalc(void);
};

int calc::sum()
{
    cout<<"adding two numbers"<<endl;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"the answer  is "<<a+b<<endl;
}

int calc :: subtract()
{
    cout<<"Subtracting two numbers"<<endl;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"the answer  is "<<a-b<<endl;
}

int calc::multiply()
{
    cout<<"Multiplying two numbers"<<endl;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"the answer  is "<<a*b<<endl;
}

int calc::divide()
{
    cout<<"Dividing two numbers"<<endl;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"the answer  is "<<a/b<<endl;
}
void calc::displayCalc()
{
    sum();
    subtract();
    multiply();
    divide();
}
int main(){
    calc mat;
    mat.displayCalc();
    // mat.sum();
    // mat.subtract();
    // mat.multiply();
    // mat.divide();
    return 0;
}