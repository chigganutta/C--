// switch2.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
	int var;
	cout << "-1- Produkt von A abholen\n";
	cout << "-2- Produkt auf Band legen\n";
	cout << "-3- Produkt vom Band nehmen\n";
	cout << "-4- Produkt nach B bringen\n";
	cout << "Ihre Wahl bitte: ";
	if ( !(cin >> var ) ) {
		cerr << "Falsche Eingabe! - Keine Zahl\n";
		exit (1);
	}
	cout << "Ihre Wahl ist: ";
	switch ( var ) {
		case 1 :
			cout << "Produkt von A abholen\n";
		case 2 :
			cout << "Produkt auf Band legen\n";
		case 3 :
			cout << "Produkt vom Band nehmen\n";
		case 4 : 
			cout << "Produkt nach B bringen\n";
			break;
		default :
			cout << "Fehler bei der Auswahl\n";
	}
	return 0;
}