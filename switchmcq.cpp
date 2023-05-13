#include<iostream>
using namespace std;

int main()
{
    int course = 2;
    switch (course)
    {
    case 1:
        cout << "java";
    case 2:
        cout << "python";
        
    default:
        cout << "cpp";
        break;
    }

    return 0;
}