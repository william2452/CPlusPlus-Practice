#include <iostream>
#include <iomanip>

using namespace std;

//4.
int var1 = 72;
int var2 = 63;

int main() {

cout << "1. Write a program in C++ to print welcome text on a separate line:\n";

    cout << "Welcome to my test project!" << endl;

cout << "\n2. Write a program in C++ to print the sum of two numbers:\n";

    int num1 = 21;
    int num2 = 62;
    int sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "!" << endl;

cout << "\n3. Write a C++ program to find the size of fundamental data types:\n";

  cout << "The size of a char data type is: " << sizeof(char) << " byte(s)." << endl;
  cout << "The size of a short data type is: " << sizeof(short) << " byte(s)." << endl;
  cout << "The size of a int data type is: " << sizeof(int) << " byte(s)." << endl;
  cout << "The size of a long data type is: " << sizeof(long) << " byte(s)." << endl;
  cout << "The size of a long long data type is: " << sizeof(long long) << "byte(s)." << endl;
  cout << "The size of a float data type is: " << sizeof(float) << " byte(s)." << endl;
  cout << "The size of a double data type is: " << sizeof(double) << " byte(s)." << endl;
  cout << "The size of a long double data type is: " << sizeof(long double) << " byte(s)." << endl;
  cout << "The size of a bool data type is: " << sizeof(bool) << " byte(s)." << endl;

cout << "\n4. Write a program in C++ to print the sum of two numbers using variables:\n";
  int varSum = var1 + var2;
  cout << "The sum of " << var1 << " and " << var2 << " is " << varSum << endl;

cout << "\n5. Write a C++ program that displays mixed data types and arithmetic operations.\n";
  int wholeNum = 51, wholeNum2 = 83;
  double nonWholeNum = 72.34, nonWholeNum2 = 42.6;
  double mixedSum = wholeNum + nonWholeNum;
  double mixedSum2 = wholeNum2 + nonWholeNum2;
  //cout << fixed << ;
  
  cout << "The total truncated sum of " << wholeNum << " and " << nonWholeNum << " is " << setprecision(4) << mixedSum << endl;
  cout << "The total truncated sum of " << wholeNum2 << " and " << nonWholeNum2 << " is " << setprecision(6) << mixedSum2 << endl;

cout << "\nWrite a C++ program to add two numbers and accept them from the keyboard:\n";
double userNum1, userNum2;

  cout << "Please enter two numbers greater than or equal to zero that you would like to be added together:" << endl;
  cout << "Please enter the first number you would like to add: ";
  cin >> userNum1;
  if(userNum1 < 0) {
    cout << "\nPlease enter a number that is greater than or equal to zero: ";
    cin >> userNum1;
  }
    
  cout << "Please enter the second number you would like to add: ";
  cin >> userNum2;
  if(userNum2 < 0) {
    cout << "\nPlease enter a number that is greater than or equal to zero: ";
    cin >> userNum2;
  }

  double userNumTotal = userNum1 + userNum2;
  cout << "\nThe total of " << userNum1 << " and " << userNum2 << " is " << userNumTotal << "." << endl;
  
  char string1;
  cout << "Please type your name here: ";
  cin >> string1;
  cout << "\nYour name is: " << string1 << ". If that is not correct, please enter again:";
  



  
}