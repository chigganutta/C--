// function.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void);           //Hauptfunktion - Deklaration
int area( int l, int b);  //Flächenberechnungsfunktion - Deklaration 
bool not_null( int var);  //0-Kontrolle - Deklaration

int area( int l, int b) { //Flächenberechnung - Definition
	return ( l * b);
}

bool not_null( int var ) { //0-Kontrolle - Definition
	if (var > 0) {
		return true;
	}
	else {
		return false;
	}
}

int main(void) { // Hauptfunkt. Definition
	int var1, var2, ret;
	cout << "Bitte die Länge angeben:";
	if ( !(cin >> var1)) { 
		cerr << "Fehler bei der Eingabe!\n";
		exit(1);
	}
	cout << "Bitte die Breite angeben:";
	if (!(cin >> var2)) {
		cerr << "Fehler bei der Eingabe!\n";
		exit(1);
	}
	if (not_null(var1) && not_null(var2)) {
		ret = area ( var1, var2);
	}
	else {
		cout << "Eine der Angaben war 0!\n";
		exit(1);
	}
	cout << "Die Fläche beträgt:" << ret << "\n";
	return 0;
}