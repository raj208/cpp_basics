#include<iostream>
using namespace std;

int c =45;

int main(){

    //*******built in datatypes*********
    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"enter the value  of c "<<endl;
    cin>>c;
    cout<<"the sum is "<<a+b+c<<endl;

    //*********local varibale*********
    cout<<"the value of local varibales a is  = "<<a<<endl;
    cout<<"the value of local varibales b is  = "<<b<<endl;
    cout<<"the value of local varibales c is  = "<<c<<endl;

    //global variable
    cout<<"the global variable c is "<<::c;


    //******float double and long double literals**********
    float d= 3.14F;
    long  double e = 3.14L;
    cout<<"the size of  3.14 is "<<sizeof(3.14)<<endl;
    cout<<"the size of  3.14F is "<<sizeof(3.14F)<<endl;
    cout<<"the size of  3.14f is "<<sizeof(3.14f)<<endl;
    cout<<"the size of  3.14L is "<<sizeof(3.14L)<<endl;
    cout<<"the size of  3.14l is "<<sizeof(3.14l)<<endl;


    //********Reference variables**********
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;


    //********typecasting*******
    int a = 45;
    float b = 45.45;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<<float(a)<<endl;

    cout<<"the value of b is "<<(int)b<<endl;
    cout<<"the value of b is "<<int(b)<<endl;

    cout<<"the value of expression is "<<a+b<<endl;
    cout<<"the value of expression is "<<a+int(b)<<endl;
    cout<<"the value of expression is "<<a+(int)b<<endl;
    return 0;

}