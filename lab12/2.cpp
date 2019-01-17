#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct LineItem {
    string name;
    double price;
    int qty;
};

void printSubtotal(double sum) {
    cout << "Subtotal: $" << sum << endl;
}

void printBill(const vector<LineItem> &items) {
    double total = 0;
    cout << "--" << endl;
    for(auto item : items) {
        total += item.price * item.qty;
        cout << item.name << " $" << item.price << " x" << item.qty << endl;
    }
    cout << "--" << endl << "Total: $" << total << endl;
}

int main() {
    double sum = 0;
    string name;
    double price;
    int qty;
    vector<LineItem> items;

    cout << fixed << setprecision(2);

    while(cin >> name >> price >> qty) {
        sum += price * qty;
        printSubtotal(sum);
        LineItem item;
        item.name = name;
        item.price = price;
        item.qty = qty;
        items.push_back(item);
    }
    printBill(items);
    return 0;
}
