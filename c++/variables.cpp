// syntax: type variableName = value;
#include <iostream>
#include <string>
using namespace std;

// Function declarations
int main1();
int main2();

int main() {
    int myNum;
    int myNum2 = 5;
    myNum = 15;
    cout << myNum << "\n";
    cout << myNum2 << "\n";

    cout << "\n--- main1 output ---\n";
    main1();

    cout << "\n--- main2 output ---\n";
    main2();

    return 0;
}

int main1() {
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String
    bool myBoolean = true;       // Boolean (true or false)

    cout << myNum << "\n";
    cout << myFloatNum << "\n";
    cout << myLetter << "\n";
    cout << myText << "\n";
    cout << myBoolean << "\n";

    return 0;
}

int main2() {
    int myAge = 21;
    cout << "I am " << myAge << " years old.\n";

    int x = 7;
    int y = 3;
    int sum = x + y;
    cout << "Sum: " << sum << "\n";

    return 0;
}