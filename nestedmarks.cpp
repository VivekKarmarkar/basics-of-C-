#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks > 33)
    {
        if(marks > 80)
        {
            cout << "Gracefully passed";
        }
        else
        {
            cout << "Passed";
        }
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}