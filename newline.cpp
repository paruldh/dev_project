#include <iostream>
using namespace std;

int main()
{
    std::cout<<"This is our second program \n";
    std::cout<<"To show new line printing\n";

    // using two \n will create space after printing the output

    std::cout<<"This is first line \n \n";
    std::cout<<"this is second line with a blank space\n";
     

    // another way to break the line by using endl manipulator inplace of \n

    cout<<"Another example to break"<< endl;
    cout<<"new line";
    return 0;
}