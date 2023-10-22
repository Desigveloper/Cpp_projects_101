#include <iostream>

using namespace std;

/**
* Main function for the program. Reads two integers and swaps them.
*Prints the result of swapping the two integers to the screen.
*  
* @return Returns 0 on success or non - zero on failure.
* In case of failure the program exits with an error
*/
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