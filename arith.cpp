// arith.cpp
#include <iostream>
using namespace std;

int main(void) {
	int var1, var2, var3;
	
	cout << "Operand 1: ";
	cin >> var1;
	cout << "Operand 2: ";
	cin >> var2;
	
	cout << "Multiplikation: " << var1 << " * "
		 << var2 << " = " << (var1*var2) << '\n';
		 
	var3 = var1 + var2;
	cout << "Addition: " << var1 << " + " 
		 << var2 << " = " << var3 << '\n';
	
	(!var2) ?var2=1 :var2=var2;
	cout << "Division: " << var3 << " / " << var2 << " = " << (var3/var2) << '\t';
	
	cout << "Rest: " << (var3%var2) << ")\n";
	
	var1 = var3 - var2;
	cout << "Subtraktion: " << var3 << " - " << var2 << " = " << var1 << '\n';
	
	return 0;
}
