//there are two types of header files 
// 1. system header files - it comes with the complier

#include<iostream>

//2. user defined header files - it is written with the programmer

/* #include "this.h" ---> this will produce error if this is not present in current directory*/

using namespace std;
 
int main()
{
    int a = 5, b = 6;
    cout<<"Operators in C++"<<endl;
    cout<<endl;

    //Arithmetic operators
    cout<<"following are the arithmetic operators"<<endl;
    cout<<"The value of a + b is : "<<a+b <<endl;
    cout<<"The value of a - b is : "<<a-b <<endl;
    cout<<"The value of a * b is : "<<a*b <<endl;
    cout<<"The value of a / b is : "<<a/b <<endl;
    cout<<"The value of a % b is : "<<a%b <<endl;
    cout<<"The value of a++ is : "<<a++ <<endl;
    cout<<"The value of a-- is : "<<a-- <<endl;
    cout<<"The value of ++a is : "<<++a <<endl;
    cout<<"The value of --a is : "<<--a <<endl;
    cout<<endl;

    

    //comparison operators

    cout<<"following are the comparison operators";
    cout<<endl;
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl; 

    //logical operators
    cout<<endl;
    cout<<"following are the logical operators"<<endl;
    cout<<"the value of this logical operator ((a == b ) && (a > b )) is : "<<((a == b ) && (a > b ))<<endl;
    cout<<"the vaclue of this logical operator ((a == b ) || (a > b )) is : "<<((a == b ) || (a > b ))<<endl;
    cout<<"the vaclue of this logical operator ((a == b ) && (a > b )) is : "<<((a == b ) && (a > b ))<<endl;
    cout<<"the vaclue of this logical operator (!(a == b )) is : "<<(!(a == b ))<<endl;
    return 0;
}
