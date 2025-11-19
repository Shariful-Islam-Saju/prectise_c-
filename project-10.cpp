#include <iostream>
using namespace std;

void startPrint(int startCount, int spaceCount) {
    for (int i = 0; i < startCount; i++) {
        cout << "*";
    }
    cout << endl;
}

void spacetPrint(int spaceCount) {
    for (int i = 0; i < spaceCount; i++) {
        cout << "*";
    }
    cout << endl;
}

int convertNToLineNumber(int n) {
    return ((n + 1) / 2) + 5;
}

int main() {
    int n =3;

    int lineNumber = convertNToLineNumber(n);

    for (int i = 1; i <= lineNumber; i++) {

        startPrint(i);
    }

    return 0;
}
