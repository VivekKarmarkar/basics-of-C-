#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3, maxF, maxG;
    cout << "enter num1: ";
    cin >> num1;
    cout << "enter num2: ";
    cin >> num2;
    cout << "enter num3: ";
    cin >> num3;

    if (num1 > num2)
    {
        maxF = num1;

    }
    else
    {
        maxF = num2;
    }

    if (maxF > num3)
    {
        maxG = maxF;
    }
    else{
        maxG = num3;
    }

    cout <<"The maximum number = " << maxG << endl;

    return  0;
}