#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age < 13)
    {
        cout << "child";
    }
    else if (age > 18)
    {
        cout << "adult";
    }
    else
    {
        cout << "teenager";
    }

    return 0;
}