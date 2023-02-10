#include<iostream>
using namespace std;

int sum(int a, int b){
    return (a+b);
}

int sum (int a, int b, int c){
    return (a+b+c);
}

int main(){
    cout<<"value of 2 arguments is "<<sum(3,6)<<endl;  //9
    cout<<"value of 3 argumentsis "<<sum(3,6,1)<<endl; //10
    return 0;
}