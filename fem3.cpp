#include<iostream>
#include<vector>

int main()
{
    int a, *b;
    a = 4;

    b = &a;

    std::cout << *b << std::endl;

    a = 3;
    std::cout << *b << std::endl;

    std::vector <double> vec1(2, 3.1), *vec2;
    vec2 = &vec1;

    std::cout << vec1.size() << " " << vec2->size() << std::endl;

    vec1.resize(3);
    std::cout << vec1.size() << " " << vec2->size() << std::endl;

    std::vector<double> vec(2, 3.1);
    vec[1] = 4.3;
    for(std::vector<double>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}