#include<iostream>
using namespace std;

int main()
{
    int value = 2;
    switch (value)
    {
    case 1:
    case 2:
    case 3:
        cout<<"Physics Wallah"<<endl;
        break;
    
    default:
        cout<<"Default Output"<<endl;
        break;
    }
}