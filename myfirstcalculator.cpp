#include <iostream>
using namespace std;

double numOne;
char combination;
double numTwo;

int handleCalculation(int valueOne, int valueTwo, char valueThree){
	switch (combination){
	case '+': 
		return numOne + numTwo;
	case '-':
		return numOne - numTwo;
	case '*':
		return numOne * numTwo;
	case '/':
		return numOne / numTwo;
	default:
		return 0;

	}
}



void main()
{
	cout << "First number." << endl << endl;
	cin >> numOne;
	cout << endl;
	cout << "Choose operation" << endl;
	cout << endl;
	cin >> combination;
	cout << "Second number." << endl;
	cout << endl;
	cin >> numTwo;
	cout << handleCalculation(numOne, numTwo, combination);
}
