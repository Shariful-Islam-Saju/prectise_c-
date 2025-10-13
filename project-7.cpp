#include <iostream>
#include <vector>
using namespace std;

enum class Grade {
  A,
  B,
  C,
  D,
  F
};

struct Student {
  string name;
  Grade grade;
};




int main(){
  vector<Student> students = {
    {"Shariful", Grade::A},
    {"Aminul", Grade::B},
    {"Rafi", Grade::C}
  };


  return 0;
}

