#include<iostream>
using namespace std;

int main()
{
    int num1, num2, temp;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;

}