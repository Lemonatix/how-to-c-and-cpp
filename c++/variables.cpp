// syntax: type variableName = value;

#include <iostream>
#include <string>
using namespace std;

int main1();
int main2();

int main() {
  int myNum;
  int myNum2 = 5;
  myNum = 15;
  cout << myNum << "\n";
  cout << myNum2;
  return 0;
}

int main1 () {
  int myNum = 5; // Integer (whole number)
  float myFloatNum = 5.99; // Floating point number
  char myLetter = 'D'; // Character
  string myText = "Hello"; // String
  bool myBoolean = true; // Boolean (true or false)

  cout << myNum << "\n";
  cout << myFloatNum << "\n";
  cout << myLetter << "\n";
  cout << myText << "\n";
  cout << myBoolean;
  return 0;
}

int main2 () {
    int myAge = 21;
    cout << "I am   " << myAge << " years old.";
    int x = 7;
    int y = 3;
    int sum = x + y;
    cout << sum;
    return 0;
}