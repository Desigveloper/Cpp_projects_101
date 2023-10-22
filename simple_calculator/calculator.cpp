#include <iostream>

using namespace std;

int main() {
	int _operator;
	double num1, num2, result;

	do
	{
		cout << "\nOPERATOR MENU" << endl;
		cout << "1. plus(+)" << endl;
		cout << "2. minus(-)" << endl;
		cout << "3. multiplication(*)" << endl;
		cout << "4. division(/)" << endl;
		cout << "5. modulo(%)" << endl;

		cout << "Select an operator: ";
		cin >> _operator;
	} while (_operator < 1 || _operator > 5);

	cout << "Enter the two numbers(operands) separated by space:" << endl;
	cin >> num1 >> num2;


	switch (_operator) {
		case 1:
			result = num1 + num2;
			cout << result << endl;
			break;
		case 2:
			result = num1 - num2;
			cout << result << endl;
            break;
		case 3:
			result = num1 * num2;
			cout << result << endl;
			break;
		case 4:
			result = num1 / num2;
			cout << result << endl;
			break;
		case 5:
			result = (int)num1 % (int)num2;
			cout << result << endl;
			break;
		default:
			break;
	}
	return 0;
}
