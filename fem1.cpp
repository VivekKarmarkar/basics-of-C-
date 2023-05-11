#include<iostream> //The header file iostream helps us take input from the terminal as well as helps us print to the terminal
#include<vector> //The header file typeinfo contains the vector data type

int main()
{
    int a;
    int b, c;
    int d=1, e=3, f;

    unsigned int g = 10;
    double h = 1.3, i;

    std::cout << 3/4 << std::endl; //Returns an integer, not float
    std::cout << 3.0 / 4.0 << std::endl;

    std::vector<double> vec1;
    std::vector<double> vec2(3); //vector initialized to have a size of 3 and assigns default value 0 to each element
    std::vector<double> vec3(3, 1.); //vector initialized to have a size of 3 and assigns a value of 1. to each element

    std::cout << "First element of vec2: " << vec2[0] << std::endl;
    std::cout << "First element of vec3: " << vec3[0] << std::endl;

    std::cout << "size of vec1: " << vec1.size() << std::endl; //print size of vec1
    vec1.resize(5); //resize vec1
    vec1.push_back(3.2); //add an element at the end to vec1
    std::cout << "size of vec1 after resizing: " << vec1.size() << std::endl; //print size of vec1 after resizing

    std::cout << "First element of vec1 after resizing: " << vec1[0] << std::endl;

    //print vec2 using a for loop
    for (int i=0; i < vec2.size(); i++) //for loop iterates over vec2
    {
        std::cout << vec2.at(i) << ' '; //print each element of vec2 and then print a space
    }
    std::cout << std::endl; //end line after printing the entire vec2 vector

    //print vec3 using a for loop
    for (int j=0; j < vec3.size(); j++) //for loop iterates over vec3
    {
        std::cout << vec3.at(j) << ' '; //print each element of vec3 and then print a space
    }
    std::cout << std::endl; //end line after printing the entire vec3 vector

    std::cout << "Hello, world!" << std::endl; //Since we have not imported namepace, we need to use std::cout instead of just cout and the same for endl

    return 0;
}