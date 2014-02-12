//pointer.cpp

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
	int *ptr;
	int var = 5;

	char *string = new char[50];
	
	strcpy(string, "01234567890123456789012345678901234567890123456789");
	
	cin >> string;
	
	cout << string << "\n";
	
	for(int i=0; i < 50; i++) {
		cout << *(string + i) << "\n";
	}
	
	ptr = &var;
	
	cout << "Wert[var]    : " << var << "\n";
	cout << "Addresse[var]: " << &var << "\n";
	
	cout << "Addresse[ptr]: " << ptr << "\n";
	cout << "Wert[ptr]    : " << *ptr << "\n";
	
	*ptr = 7;
	cout << "Wert[var]    : " << var << "\n";
	
	int *test;
	cout << "Addresse[test]: " << test << "\n";
	
	test = new int;
	cout << "Addresse[test]: " << test << "\n";
	
	*test = 8;
	cout << "Wert[test]    : " << *test << "\n";
	
	delete test;
	
		
	return 0;
}