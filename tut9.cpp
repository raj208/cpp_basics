#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a;
    // (address of) operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;

    //(value at ) deference operator
    cout<<"the value at address b is "<<*b<<endl;

    //pointer to pointer
    int** c = &b;
    cout<<"the address  of b is "<<c<<endl; //address
    cout<<"the address  of b is "<<&b<<endl; //address 
    cout<<"the value at address c is "<<**c<<endl; //address of b
    cout<<"the value of address value_at(value_at(c)) "<<*c<<endl; //address  of b
    // comment add
    // second comment
    return 0;
}