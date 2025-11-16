#include <iostream>
using namespace std;


int startPrint(int startCount) {
  for (int i = 0; i < startCount; i++) {
    cout << "*";
  }
  cout << endl;
  return 0;
};

int convertNToLineNumber (int n) {
  return  ((n+1) / 2 ) + 5 ;
};



int main() {
  int n;
  cin >> n;

  cout << convertNToLineNumber(n) << endl;
  
  return 0;
}
