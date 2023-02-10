#include<iostream>
using namespace std;

// inline int product(int a, int b){
//     return a*b;
// }

// int main()
// { 
//     cout<<product(4,2);    
//     return 0;
// }
  

//   *******static*********
// int product (int a, int b){
//     static int c = 0;
//     c = c+1;
//     return a*b+c;
// }

// int main()
// {
//     int x,y;
//     cout<<"enter the value of a ";
//     cin>>x;
//     cout<<"enter the value of b ";
//     cin>>y;
//     // product(x,y);
//     cout<<"the product is "<<product(x,y)<<endl;
//     cout<<"the product is "<<product(x,y)<<endl;
//     cout<<"the product is "<<product(x,y)<<endl;
//     cout<<"the product is "<<product(x,y)<<endl;
//     cout<<"the product is "<<product(x,y)<<endl;
//     return 0;
// }


// ****default argument****
float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

int main()
{
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs  after 1 year";
    return 0;
}