//switch.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
	int var;
	cout << "Wähle, was Alexis ist: \n";
	cout << "-1- Looser\n";
	cout << "-2- Versager\n";
	cout << "-3- Spast\n";
	cout << "-4- Siegertyp\n";
	if ( ( !(cin >> var) ) || ( var >= 4 ) ) {
		cerr << "Falsche Eingabe!\n";
		exit (1);
	}
	cout << "Deine Wahl ist: ";
	switch ( var ) {
		case 1:
			cout << "Sie finden, dass Alexis ein Looser ist!\n";
			break;
		case 2:
			cout << " Sie finden, dass Alexis ein Versager ist!\n";
			break;
		case 3:
			cout << "Sie finden, dass Alexis ein Spast ist!\n";
			break;
		default:
			cout << "Sie sind ein schlechter Mensch!\n";
		}
		return 0;
	}