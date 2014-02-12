// alexis.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
	char var;
	cout << "Was tut Alexis? " ;
	var = cin.get();
	cout << "Ja genau, er ist ein Meister im " << (char)var << '\n';
	return 0;
}