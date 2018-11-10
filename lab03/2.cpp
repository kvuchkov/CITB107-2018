#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declaration
    const int LEVA = 100;

    int total;
    int paid;
    int change;
    int left;
    int hundreds;
    int fifties;
    int twenties;
    int tens;
    int twos;
    int ones;
    int fiftyCents;
    int twentyCents;
    int tenCents;
    int fiveCents;
    int twoCents;
    int oneCents;

    // Input
    cout << "Total: ";
    cin >> total;
    cout << "Paid: ";
    cin >> paid;

    // Calculations
    left = change = paid - total;

    hundreds = left / (100 * LEVA);
    left = left % (100 * LEVA);

    fifties = left / (50 * LEVA);
    left = left % (50 * LEVA);

    twenties = left / (20 * LEVA);
    left = left % (20 * LEVA);

    tens = left / (10 * LEVA);
    left = left % (10 * LEVA);

    twos = left / (2 * LEVA);
    left = left % (2 * LEVA);

    ones = left / (1 * LEVA);
    left = left % (1 * LEVA);

    fiftyCents = left / 50;
    left = left % 50;

    twentyCents = left / 20;
    left = left % 20;

    tenCents = left / 10;
    left = left % 10;

    fiveCents = left / 5;
    left = left % 5;

    twoCents = left / 2;
    left = left % 2;

    oneCents = left;

    // Format Configuration - two digits after the decimal point.
    cout << fixed << setprecision(2);

    // Output
    cout << "Change: " << change / (float)LEVA << endl;
    cout << hundreds << " x 100 LEVA" << endl;
    cout << fifties << " x 50 LEVA" << endl;
    cout << twenties << " x 20 LEVA" << endl;
    cout << tens << " x 10 LEVA" << endl;
    cout << twos << " x 2 LEVA" << endl;
    cout << ones << " x 1 LEVA" << endl;
    cout << fiftyCents << " x 50 cents" << endl;
    cout << twentyCents << " x 20 cents" << endl;
    cout << tenCents << " x 10 cents" << endl;
    cout << fiveCents << " x 5 cents" << endl;
    cout << twoCents << " x 2 cents" << endl;
    cout << oneCents << " x 1 cent" << endl;

    return 0;
}
