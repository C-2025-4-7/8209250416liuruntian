#include <iostream>
using namespace std;

int main() {
    const int NUM_LOCKERS = 100;
    bool lockers[NUM_LOCKERS + 1] = { false };
    for (int student = 1; student <= NUM_LOCKERS; student++) {
        for (int locker = student; locker <= NUM_LOCKERS; locker += student) {
            lockers[locker] = !lockers[locker];
        }
    }
    cout << "开着的柜子编号：";
    bool first = true; 
    for (int locker = 1; locker <= NUM_LOCKERS; locker++) {
        if (lockers[locker]) {
            if (!first) {
                cout << " ";
            }
            cout << locker;
            first = false;
        }
    }
    cout << endl;

    return 0;
}