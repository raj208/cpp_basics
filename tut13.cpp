#include<iostream>
using namespace std;

// ****this will not work****
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main(){
//     int x = 4, y = 5;
//     cout<<"the value of x "<<x<<"the value of y "<<y<<endl;
//     swap(x,y);   
//     cout<<"the value of x "<<x<<"the value of y "<<y<<endl;
//     return 0;
// }


// call by reference using pointer

// void swap(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x = 4, y = 5;
//     cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
//     swap(&x, &y);
//     cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
// }



// call by reference using variable

void swap(int &a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int & sawpReferenceVar(int &p, int &q)
{
    int temp = p;
    p= q;
    q = temp;
    return p;
}


int main()
{
    int x = 4, y = 5;
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    swap(x, y);
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;

    int i = 6, j = 9;
    cout<<"the value of i is "<<i<<" the value of j is "<<j<<endl;
     sawpReferenceVar(i, j)= 766;   //the value of i changes to 766
    cout<<"the value of i is "<<i<<" the value of j is "<<j<<endl;
}


