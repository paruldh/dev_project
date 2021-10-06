#include <iostream>
using namespace std;

int main()
{
    int num = 15;
    num = 16;
    // Note that if we assign a new value to an existing variable, it will overwrite the previous value:

    float dec = 15.66;
    char alpha = 'd';
    string text = "My name is program";
    bool test = false;
    cout<< num << endl;
    cout<< alpha << endl;
    cout<< text << endl;
    cout<< test << endl;
    
    // The cout object is used together with the << operator to display variables. To combine both text and a variable, separate them with the << operator:
    cout<<"My age is "<<num<<" years old";

    // we can add variables as well

    int x = 10;
    int y = 12;
    int z = 10;
    int sum = x + z ;
    int sum = x + y;
    int sub = x - y;
    int sub = x - z ;
    int mut = x*y;
    double div = x/y; 

    cout<<x << endl;
    cout<<y << endl;
    cout<<sum << endl;
    cout<<sub << endl;
    cout<<mut << endl;
    cout<<div << endl;
    return 0;
}
