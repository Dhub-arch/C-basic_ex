#include <iostream>
using namespace std;

int main() 
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    cout << "Enter number one: ";
    cin >> firstNumber;
    
    cout << "Enter number two: ";
    cin >> secondNumber;
    
    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    
    // Prints sum
    cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;
    
    return 0;
}