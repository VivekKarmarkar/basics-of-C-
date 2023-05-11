#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a"<<endl;
    int a;
    cin>>a;

    cout<<"Enter b"<<endl;
    int b;
    cin>>b;

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"The value of a swapped = "<<a<<endl;
    cout<<"The value of b swapped = "<<b<<endl;

    return 0;
}