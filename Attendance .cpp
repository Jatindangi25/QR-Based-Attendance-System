#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

string getDate() {
    time_t now = time(0);
    string date = ctime(&now);
    return date;
}

void markAttendance(string studentID, string date) {
    ofstream file("attendance.txt", ios::app);
    file << studentID << "  " << date;
    file.close();
}
