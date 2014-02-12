// if2.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
	int var;
	cout << "(0) Ergibt if\n";
	cout << "(1-2) Ergibt else if\n";
	cout << "(3-9) Ergibt else\n";
	cout << "\nIhre Wahl bitte: " ;
	if ( (cin >> var ) == false )
		cerr << "Fehler bei der Eingabe!\n";
	if ( var == 0 )
		cout << "Du hast if gewählt!\n";
	else if ( var == 1 ) 
		cout << "Du hast elfe if gewählt!\n";
	else if ( var == 2 )
		cout << "Du hast else if gewählt!\n";
	else
		cout << "Du hast else gewählt!\n";
	return 0;
}