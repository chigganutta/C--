// guess.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int generator(int input);
bool check(int input, int input2);
int input;
int wert;
int eingabe;

int main(void) {
	while (true) {
		cout << "Bitte geben Sie eine Zahl zwischen 0 und 100 ein,\nich werde daraus eine neue, geheime generieren: ";
		cin >> input;
		if ((cin >> input) == false) {
			cerr << "Bitte nur Zahlen eingeben!\n";
		}
		if (!((input >= 0 ) && (input <= 100))) {
			cerr << "Die Zahl muss zwischen 0 und 100 liegen!\n";
		}
		else {
			wert = generator(input);
			break;
		}
	}
	while (true) {
		cout << "Bitte raten Sie:\n";
		cin >> eingabe;
		if ( eingabe == false) {
			cerr << "Bitte nur Zahlen eingeben!\n";
		}
		if (( eingabe  < 0) || ( eingabe > 100)) {
			cerr << "Bitte nur Zahlen zwischen 0 und 100 eingeben!\n";
		}
		if (eingabe > wert) {
			cout << "Zu hoch!\n";
		}
		else if (eingabe == wert) {
			cout << "Sie haben richtig geraten, die Zahl war: " << wert << '\n';
			break;
			}
		else {
			cout << "Zu niedrig!\n";
		}	
	}
	return 0;
}

int generator(int input) {
	srand(input);
	return (rand()%100+1);		
	cout << "Danke! Sie können jetzt anfangen zu raten!\n";
}