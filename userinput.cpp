// USER INPUT

#include <iostream>
using namespace std;

int main()
{

    int age;
    cout<<"Please enter your age:";
    cin>> age;
    if (age > 18)
    {
        cout<< "Your are eligible to vote";
    }
    else
    {        
        cout<<"Your are not eligible to vote";
    }
    return 0;    
}
