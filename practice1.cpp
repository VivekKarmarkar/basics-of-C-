#include<iostream>
using namespace std;

int main()
{
    int a = 1; //a=1
    int b = 1; //b=1
    int c = a || --b; //a=1, b=1 (--b does not evaluate because of short circuiting), c=1
    int d = a-- && --b; //a=1, b=0, d=0
    cout<<a<<b<<c<<d<<endl; //a=0, b=0, c=1, d=0

    int num1, num2;
    cin >> num1 >> num2;
    if (num2 != 0)
    {
        cout << num1/num2 << endl;
    }
    else
    {
        cout << "num2 = 0" << endl;
    }

    int score;
    cin >> score;
    if (score > 80)
    {
        cout << "High score" << endl;
    }
    else if (score > 50)
    {
        cout << "Medium score" << endl;
    }
    else
    {
        cout << "Low score" << endl;
    }

    return 0;
}