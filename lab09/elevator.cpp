#include <iostream>

using namespace std;

const int FLOORS = 3;
const int DOWN = -1;
const int UP = 1;
const int STOP = 0;

bool buttons[FLOORS] = {};
int floor = 0;
int dir = STOP;

void printButtons() {
    for (int i=0; i<FLOORS; i++) {
        cout << "Floor #" << i << ": ";
        bool pressed = buttons[i];
        if(pressed) {
            cout << "PRESSED" << endl;
        } else {
            cout << "NOT PRESSED" << endl;
        }
    }
}

void printElevator() {
    cout << "Elevator is at " << floor << " and ";
    if (UP == dir) {
        cout << "going up." << endl;
    } else if (DOWN == dir) {
        cout << "going down." << endl;
    } else {
        cout << "is open." << endl;
    }
}

void logic() {
    bool above = false;
    for(int i=floor+1; i<FLOORS; i++) {
        above = above || buttons[i];
    }

    if(above && STOP == dir) {
        dir = UP;
    }

    bool below = false;
    for(int i=floor-1; i>=0; i--) {
        below = below || buttons[i];
    }

    if(below && STOP == dir) {
        dir = DOWN;
    }

    if (FLOORS - 1 == floor && UP == dir || 0 == floor && DOWN == dir) {
        dir = STOP;
    }
}

void tick() {
    floor += dir;
    if (STOP == dir) {
        buttons[floor] = false;
    }
}

int main () {
    int btn;

    while(cin >> btn) {
        tick();

        if (btn >= 0 && btn < FLOORS) {
            buttons[btn] = true;
        }
        printButtons();
        logic();
        printElevator();
    }

    return 0;
}
