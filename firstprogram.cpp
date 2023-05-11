#include<iostream> // Anything after # is called a "directive" and a directive is processed by a preprocessor. We are telling the preprocessor to include <iostream> header file.
using namespace std; // namespace is like a library, we are just importing something like a library and "cout" beloongs to such a "library"
int main() // This defines the main function and code looks for main function and starts execution starts from the curly bracket. 
{
    // function is defined as return-type function-name (input parameters) {function body}
    // here return-type = int, function-name = "main", inpup parameters = none
    cout<<"hello world"; // prints "hello world" in C++. The semicolon tells the compiler that the line of code has ended
    cout<<"hello"<<endl<<"world"; //prints "hello world" in two lines
    return 0; // function ends with return statement

    /*
    Start
    Triple line comment - Line 1
    Triple line comment - Line 2
    Triple line comment - Line 3
    End
    */
}