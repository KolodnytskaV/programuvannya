#include <iostream>

using namespace std;
class Calculator {
private:
	int num1, num2, result;
public:
	void input();
	void add();
	void subtract();
	void multiply();
	void divide();
	void Result();
};
void Calculator::input() {
	cout << "First number:";
	cin >> num1;
	cout << "Second number:";
	cin >> num2;
}
void Calculator::add() {
	result = num1 + num2;
}
void Calculator::subtract() {
	result = num1 - num2;
}
void Calculator::multiply() {
	result = num1 * num2;
}
void Calculator::divide() {
	result = num1 / num2;
}
void Calculator::Result() {
	cout << "Result:" << result << endl;
}

int main() {
	Calculator calculator;
	int choice;
	cout << "Choice:\n1: Addition\n2:Substraction\n3:Multiplication\n4:Division\n";
	cin >> choice;
	calculator.input();
	switch (choice) {
	case 1: calculator.add(); break;
	case 2: calculator.subtract(); break;
	case 3: calculator.multiply(); break;
	case 4: calculator.divide(); break;
	default: cout << "Invalid choice.\n";
		return 0;
	}
	calculator.Result();
	return 0;
}