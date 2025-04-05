/* this file will explain the syntax used in hello.cpp */

# include <iostream> // is a header file library that has input and output functions, i.e. cout and cin -> adds functionality
using namespace std; // allows us to use the standard library without prefixing it with std::

int main() { // is a function, code inside {} is executed
    std::cout << "Hello World!\n"; // cout "see-out" is used to print to the console, << is the insertion operator to output/print the text
    // care: cout and Cout are different. every statement ends with ; 
    cout << "Hi there!\n";
    cout << "Have a great day!\n"; 
    return 0; // end main function
}

// \n forces a new line