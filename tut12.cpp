#include<iostream>
using namespace std;

// int sum(int a, int b)
// {
//     int c = a+b;
//     return c;
// }

// int multiply(int a, int b)
// {
//     int c = a*b;
//     return c;
// }

// int divide(int a, int b)
// {
//     int c = a/b;
//     return c;
// }

// int subtract(int a, int b)
// {
//     int c = a-b;
//     return c;
// }

int subtract(int a, int b);
int multiply(int a, int b);
int sum(int a, int b);
int divide(int a, int b);
void v();

int main()
{
    int num1, num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1, num2)<<endl;
    cout<<"the multiply is "<<multiply(num1, num2)<<endl;
    cout<<"the divide is "<<divide(num1, num2)<<endl;
    cout<<"the subtract is "<<subtract(num1, num2)<<endl;
    v();
    return 0;

}


// ********Function prototype*************



int multiply(int a, int b)
{
    int c = a*b;
    return c;
}

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

int subtract(int a, int b)
{
    int c = a-b;
    return c;
}

int divide(int a, int b)
{
    int c = a/b;
    return c;
}

void v(){
    cout<<"have a good day";
}

