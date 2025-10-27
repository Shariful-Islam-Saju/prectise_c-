#include <iostream>
using namespace std;
int main() {
  int myNumber = 10;
  int &numberRef = myNumber;
  int *numberPtr = &myNumber;
  cout << "Updated original value: " << myNumber << endl;
  cout << "Updated reference value: " << numberRef << endl;
  cout << "Pointer address: " << numberPtr << endl;
  return 0;
}

