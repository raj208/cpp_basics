#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 34;
    cout<<"the value of a is "<<a<<endl;
    a = 6;
    cout<<"the value of a now  is "<<a<<endl;


    //********constant in c++**********
    const int b = 45;
    cout<<"the value of b is "<<b<<endl;

    /*b = 9;
    cout<<"the value of b is "<<b<<endl;*/



    //******** manipulators in c++ **********
    int x = 7, y = 56, z = 7765;
    cout<<" the value of x without setw is "<<x<<endl;
    cout<<" the value of y without setw is "<<y<<endl;
    cout<<" the value of z without setw is "<<z<<endl;

    cout<<" the value of x with setw is "<<setw(4)<<x<<endl;
    cout<<" the value of y with setw is "<<setw(4)<<y<<endl;
    cout<<" the value of z with setw is "<<setw(4)<<z<<endl;

    //**************operator precidence************
    int q = 3 , r = 4;
    int p = ((((r*5)+q)-45)+87);
    cout<<p;
    return 0;
    
}