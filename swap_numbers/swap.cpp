// This program accepts two numbers from the user and swap them

#include <iostream>

using namespace std;

int main() {
    int firstNumber, secondNumber, temp;

    cout << "Enter first number:" << endl;
    cin >> firstNumber;

    cout << "Enter second number:" << endl;
    cin >> secondNumber;

    cout << "\nFirst number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;

    //swap(firstNumber, secondNumber);
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    cout << "\nFirst number is now: " << firstNumber << endl;
    cout << "Second number is now: " << secondNumber << endl;

    return 0;
}