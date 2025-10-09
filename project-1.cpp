#include <iostream>
#include <string>
using namespace std;
int main() {

  string myName, address;
  cout << "Enter your name ";
  getline(cin, myName);
  cout << "Enter your Address ";
  getline(cin, address);
  cout << "Hi " << myName << endl ;
  cout << "You lived in " << address << endl;
  return 0;
}