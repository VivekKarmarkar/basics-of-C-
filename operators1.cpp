#include<iostream>
using namespace std;

int main()
{
    int num1 = 6;
    int num2 = 3;

    cout<<"Addition: "<<num1+num2<<endl; //9
    cout<<"Subtraction: "<<num1-num2<<endl; //3
    cout<<"Multiplication: "<<num1*num2<<endl; //18
    cout<<"Division: "<<num1/num2<<endl; //2
    cout<<"Remainder: "<<num1%num2<<endl; //0

    cout<<(num1==num2)<<endl; //false 0
    cout<<(num1!=num2)<<endl; //true 1
    cout<<(num1>=num2)<<endl; //true 1

    num1 += 3;
    cout<<num1<<endl; // 9
    num2 -= 2;
    cout<<num2<<endl; // 1

    return 0;
}