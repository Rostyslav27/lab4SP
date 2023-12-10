#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
	
	Calculator calculator;
	
	double a = 2.5;
	double b = 3.2;
	
    cout << "Addition: " << a << " + " << b << " = " << calculator.Add(a, b) << endl;
	
	cout << "Substraction: " << a << " - " << b << " = " << calculator.Sub(a, b) << endl;
	
    return 0;
	
}
