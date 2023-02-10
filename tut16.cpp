#include<iostream>
using namespace std;


// int sum(int a, int b){
//     return (a+b);
// }

// int sum (int a, int b, int c){
//     return (a+b+c);
// }

// int main(){
//     cout<<"value of 2 arguments is "<<sum(3,6)<<endl;  //9
//     cout<<"value of 3 argumentsis "<<sum(3,6,1)<<endl; //10
//     return 0;
// }

// volume of is cube
int volume(int a){
    return(a*a*a);
}
// volume of is cylinder
int volume (int r,int h){
    return (3.14 * r*r*h);
}

// volume of is cuboid
int volume (int l, int b, int h){
    return(l*b*h);
}

int main(){
    cout<<"the volume of cube is "<<volume(3)<<endl;
    cout<<"the volume of cylinder is "<<volume(3,6)<<endl;
    cout<<"the volume of cuboid is "<<volume(3,4,5)<<endl;
    return 0;
}