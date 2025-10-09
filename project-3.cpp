#include <iostream>
using namespace std;
int main() {

string cars[5];
cars[0] = "Volvo";
cars[1] = "BMW";
cars[2] = "Ford";
cars[3] = "Mazda";
// cars[5] = "Toyota";
for (string car : cars) {
  cout << "This is "<< car<< " " << sizeof(car) << "\n";
}
cars[4] = "Tesla";

cout<< cars ;


  return 0;
}