#include<iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);
public:
    void read(void);
    void display(void);
    void ones_compliment(void);
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
void binary::ones_compliment(void)
{
<<<<<<< HEAD
    chk_bin();  ////nested 
=======
    chk_bin();  
>>>>>>> d57586aba127b5556305158ab586d79a0f2426af
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
        
    }
    
}
void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}


int main(){
    binary b;
    b.read();
    b.display();
    // chk_bin();     this function is private , so only classes method can access it.
    cout<<"swapping binary"<<endl;
    b.ones_compliment();
    b.display();
    return 0;
}