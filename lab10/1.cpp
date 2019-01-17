#include <iostream>

using namespace std;

int times[10] = {};

void print(int s) {
    cout << "Sum is " << s << endl;
    for (int i=1; i<10; i++) {
        cout << i << "x" << times[i] << endl;
    }
}

int main () {
    int x;
    int s = 0;

    while (cin >> x) {
        s += x;
        times[x]++;
    }

    print(s);

    return 0;
}


