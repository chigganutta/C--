// cin.cpp
#include <iostream>
using namespace std;

int main(void) {
	float wert;
	cout << "Bitte eine Fließkommazahl eingeben: ";
	cin >> wert;
	if ( ! (cin >> wert) ) {
		cerr << "Bitte nur Fließkommazahlen eingeben!\n";
	}
	else {
		cout << " Die Eingabe war: " << wert << '\n';
	}
	return 0;
}