#include<iostream>
using namespace std;

int main()
{
    /********break***********/
    for (size_t i = 0; i <= 10 ; i++)
    {
        if (i == 8){
            break;
        }
    cout<<i<<endl;    
    }

    /***********continue***********/
   for (size_t j = 11; j <= 20 ; j++)
    {
        if (j == 15){
            continue;;
        }
    cout<<j<<endl;    
    }
    
    return 0;
}