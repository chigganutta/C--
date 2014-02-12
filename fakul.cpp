// fakul.cpp
#include <iostream>
using namespace std;

long fakul(long n);
int main(void) {
	long n;
	long val;
	cout << "Ihre Zahl bitte: ";
	if (!(cin >> n)) {
		cerr << "Bitte keine 0 eingeben!\n";
		exit(1);
		}
	val = fakul(n);
	cout << "Die Fakultät beträgt: " << val << '\n';
}

long fakul(long n) {
	if ( n ) {
		return n * fakul(n-1);
	}
	return 1;
}