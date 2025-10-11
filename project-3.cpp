#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
vector <string> fruits = {"apple", "banana", "cherry", "orange"};
cout<< "Before Insertion"<<endl;
fruits.push_back("grape");
for (string fruit : fruits) {
    cout << fruit << endl;
}

fruits.insert(fruits.begin(), "tomato");
cout  << "After Insertion"<<endl;
for (string fruit : fruits) {
    cout << fruit << endl;
}
return 0;
}
