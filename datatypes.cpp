#include<iostream>
using namespace std;

int main()
{
    //integer data type
    int apples = 5;
    cout << apples << endl;
    cout << sizeof(apples) << endl;

    //character data type
    char sign = '&';
    cout << sign << endl;
    cout << "Size of char: "<< sizeof(sign) << endl;

    //boolean data type
    bool flag = true;
    cout << flag << endl;
    cout << "Size of bool: "<< sizeof(flag) << endl;

    //float data type
    float score = 3.14;
    cout << score << endl;
    cout << "Size of float: "<< sizeof(score) << endl;

    //user input
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The entered number is: " << num << endl;

    return 0;
}