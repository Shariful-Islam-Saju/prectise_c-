#include <iostream>
using namespace std;
int main() {
	int length;
	cin >> length;
	int myArray[length];
	for (int i = 0; i < length; i++) {
	int arrayValue;
	cin >> arrayValue;
	myArray[i] = arrayValue;
	}

	for ( int j = length; j-- ;){
	cout << myArray[j] << " ";
	};


  
    return 0;
}
