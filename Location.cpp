#include <iostream>
using namespace std;

bool checkLocation() {
    int distance;
    cout << "Enter distance from classroom (meters): ";
    cin >> distance;

    if (distance <= 50)
        return true;
    else
        return false;
}
