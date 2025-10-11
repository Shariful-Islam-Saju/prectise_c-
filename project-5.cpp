#include <iostream>
#include <vector>
using namespace std;
  struct studentType {
    string name;
    int age;
    bool isMarried;
    void introduce() const {
              cout << "Hi, I'm " << name
             << ". I am " << age << " years old. I am "
             << (isMarried ? "" : "not ") << "married.\n" << endl;

    }
  };
int main() {


  vector <studentType> students = {
    {
      "Shariful Islam",22,false,
    },
    {"Aminul", 23, true},
    {"Rafi", 21, false}
  };

  for (const studentType& student: students) {
    student.introduce();
  };
  return 0;
}