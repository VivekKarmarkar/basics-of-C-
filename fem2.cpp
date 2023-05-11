#include<iostream>
#include<vector>

int q = 2; //global variable, full document is scope

int main()
{

    int a = 3, b=2;
    if(a == 2 || b == 2) //or statement
    {
        std::cout << "conditions are met" << std::endl;
    }
    else if(a == 2)
    {
        std::cout << "statement 2 is true. \n";
    }
    else
    {
        std::cout << "all conditions are not met\n";
    }

    std::cout << "q = " << q << std::endl;

    std::vector <double> vec(10,2);
    for(int i = 0; i < 10; i++) //for(declaration; condition; increment)
    {
        vec[i] += i;
        std::cout << vec[i] << std::endl;
    }

    //curly brackets required to remind us of the scope of the statement
    int d = 1;
    if(d == 1)
        std::cout << "d=1\n";

    for(int j = 0; j < 5; j++)
        std::cout << vec[j] << std::endl;

    return 0;
}