// while.cpp
#include <iostream>
using namespace std;

int main(void) {
	int var = 0;
	
	/*while ( true ) {
		cout << var++ << " Kaya stinkt!\n";
	}*/
	
	
	for(int i=0; i < 5; i++) {
		for(int j=0; j < 10; j++) {
			cout << j;
		}
	}
	
	return 0;
}