#include <iostream>
#include <algorithm>
using namespace std;

enum letters { a=1, b, c, d, e, f, g, h, i, j , k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z };

int main() {
  string word;
  cin >> word;
  transform(word.begin(), word.end(), word.begin(),
          [](unsigned char c){ return tolower(c); });

  return 0;
}

