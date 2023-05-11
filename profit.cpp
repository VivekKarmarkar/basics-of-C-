#include<iostream>
using namespace std;

int main()
{
    int cp, sp, profit, loss;
    cout << "Enter cost price: " << endl;
    cin >> cp;
    cout << "Enter selling price: " << endl;
    cin >> sp;

    if (sp > cp)
    {
        cout << "You have profit" << endl;
        profit = sp - cp;
        loss = 0;
        cout << profit << endl;
    }
    else if (sp < cp)
    {
        cout << "You have loss" << endl;
        profit = 0;
        loss = cp - sp;
        cout << loss << endl;
    }
    else
    {
        cout << "You have neither profit nor loss" << endl;
        profit = 0;
        loss = 0;
    }

    return 0;
}