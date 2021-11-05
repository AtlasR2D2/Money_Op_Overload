#include <iostream>
#include "Money.h"

using namespace std;

int main(){
	Money m1 {10,10};
	Money m2 {100,10};
	Money m3 = m1+m2;
	
	cout << m3.get_dollars() << "." << m3.get_cents() << endl;
	
	
	return 0;
}