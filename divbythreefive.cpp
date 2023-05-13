#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if ((num%5 == 0) || (num%3 == 0))
    {
        cout << "Nice number" <<endl;
    }

    return 0;
}