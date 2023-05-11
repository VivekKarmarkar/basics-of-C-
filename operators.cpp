#include<iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 4;

    cout << "Sum: " << num1+num2 << endl;
    cout << "Difference: " << num1-num2 << endl;
    cout << "Product: " << num1*num2 << endl;
    cout << "Division: " << num1/num2 << endl;
    cout << "Remainder: " << num1%num2 << endl;

    float num3 = 10;
    float num4 = 4;

    cout << "Sum: " << num3+num4 << endl;
    cout << "Difference: " << num3-num4 << endl;
    cout << "Product: " << num3*num4 << endl;
    cout << "Division: " << num3/num4 << endl;

    int a = 5;
    cout<<a++<<endl;
    cout<<a--<<endl;
    cout<<a<<endl;
    cout<<++a<<endl;
    cout<<--a<<endl;
    cout<<a<<endl;

    int c = 3;
    int d = 4;
    cout<<(c==d)<<endl;
    cout<<(c!=d)<<endl;
    cout<<(c>=d)<<endl;

    int a1 = 5;
    int b1 = 6;
    int max;

    a1 > b1? max=a1 : max=b1; //ternary operator
    cout<<max<<endl;

    return 0;
}