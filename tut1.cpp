#include<iostream>
using namespace std;

int glo = 6;
void sum(){
    int a;
    cout<<"\nGlobal variable " <<glo;
}
int main (){
    //int a = 4;
    //int b = 2;
    int glo = 9;
    glo = 78;
    int a=14 , b=15;
    float pi = 3.14;
    char u= 'm';
    cout<<"The value of a is " <<a<<"\nThe value  of b is "<<b ;
    cout<<"\nThe value of pi is : "<<pi ;
    cout<<"\nThe value of char is : "<<u ;
    sum();
    cout<<" \nLocal variable " <<glo;
    return 0;
}