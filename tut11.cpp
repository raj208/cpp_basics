#include<iostream>
using namespace std;

typedef struct employee
{
    int eID = 654654;
    char favChar = 'c';
    float salary = 23.876765;
}emp;

union money

{
    /* data */
    int rice;
    char car;
    float pounds;
    
};
 

int main()
{
    // emp  harry;
    // struct employee subham;
    // cout<<"the value is "<<harry.eID<<endl;
    // cout<<"the value is "<<harry.favChar<<endl;
    // cout<<"the value is "<<harry.salary<<endl;
    // cout<<"the value is "<<subham.salary<<endl;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'b';
    // cout<<m1.car;

    enum meals{ breakfast, lunch, dinner};
    meals m1 = lunch;
    meals m2 = dinner;
    cout<<m1<<endl; //1
    cout<<(m2 == 1); //0


    return 0;
}