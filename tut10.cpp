#include<iostream>
using namespace std;

int main(){
    int chem_marks[] = {23, 45, 56, 89};

    int math_marks[4];
    math_marks[0] = 35;
    math_marks[1] = 75;
    math_marks[2] = 78;
    math_marks[3] = 86;
    cout<<"these are math_marks"<<endl;
    cout<<math_marks[0]<<endl;
    cout<<math_marks[1]<<endl;
    cout<<math_marks[2]<<endl;
    cout<<math_marks[3]<<endl;
    
    cout<<"these are chem_marks"<<endl;
    cout<<chem_marks[0]<<endl;
    cout<<chem_marks[1]<<endl;
    cout<<chem_marks[2]<<endl;
    cout<<chem_marks[3]<<endl;

// you can change the value of is_array
    cout<<"these are chem_marks"<<endl;

    chem_marks[2] = 67;
    cout<<chem_marks[0]<<endl;
    cout<<chem_marks[1]<<endl;
    cout<<chem_marks[2]<<" (value changed)"<<endl;
    cout<<chem_marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of chem_marks "<<chem_marks[i]<<endl;
    }

    // pointers and array
     int* p = chem_marks;
    // cout<<*(p++)<<endl;
    // cout<<*(p++)<<endl;
    // cout<<*(p++)<<endl;
    // cout<<*(p++)<<endl;

    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 


  

    

    return 0;

}