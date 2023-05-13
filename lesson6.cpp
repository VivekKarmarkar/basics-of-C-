#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks > 80)
    {
        cout << "A" << endl;
    }
    else if (marks > 60)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "Fail"<<endl;
    }

    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num%2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }
    return 0;
}