#include<iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_cpmpliment(void)
};

void binary::read(void)
{
    cout <<"Enter a binary number"<<endl;
    cin>>s;
}
void binary::chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrect binary format" <<endl;
            exit(0);
        }
        
    }
}
void binar::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
    }
    
}


int main(){
    
    return 0;
}