// switch3.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
	int ch;
	while ( (ch = cin.get()) !=EOF ) {
		switch ( (char) ch) {
			case '$':
				cout << "(Dollarzeichen)";
				break;
			case '#':
				cout << "(Hashtag)";
				break;
			default:
				cout << (char)ch;
		}
	}
}
