#include <iostream>
#include <fstream>
using namespace std;

void showCSV() {
    ifstream file("attendance.csv");
    string line;

    cout << "Attendance CSV:";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}
