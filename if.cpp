// if.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
	int var1, var2;
	cout << "Bitte eine Zahl eingeben: ";
	if ( ( cin >> var1 ) == false ) {
		cerr << "Fehler bei der Eingabe!\n";
		exit(1);
	}
	cout << "Bitte den Teiler eingeben: ";
	if ( ( cin >> var2 ) == false ) {
		cerr << "Fehler bei der Eingabe!";
		exit(1);
	}
	if ( var2 == 0 ) {
		cerr << "Der Teiler darf nicht 0 sein!\n";
		exit(1);
	}
	cout << "Ergebnis der Division: " << var1 << " / " 
	<< var2 << " = " << (var1/var2) << '\n';
	return 0;
}