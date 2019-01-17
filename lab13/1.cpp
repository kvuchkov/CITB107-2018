#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Money {
    int value;
    int count;
    Money(int v, int c) {
        value = v;
        count = c;
    }
};

float money(int value) {
    cout << fixed << setprecision(2);
    return value / 100.0;
}

int main() {
    int total;
    int paid;
    int change;

    vector<Money> units;
    int sz;
    cin >> sz;
    for(int i=0; i<sz; i++) {
        int v,c;
        cin >> v >> c;
        units.push_back(Money(v, c));
    }



    while(cin >> total >> paid) {
        change = paid - total;

        cout << "Total: " << money(total) << endl;
        cout << "Paid: " << money(paid) << endl;
        cout << "Change: " << money(change) << endl;

        int left = change;
        for(auto &unit : units) {
            int cnt = min(unit.count, left / unit.value);
            if(cnt > 0) {
                cout << cnt << "x " << money(unit.value) << endl;
            }
            unit.count -= cnt;
            left -= cnt * unit.value;
        }
        if(left > 0) {
            cout << "Nema kinti!" << endl;
        }
    }
    return 0;
}
