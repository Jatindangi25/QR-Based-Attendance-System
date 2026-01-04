#include <iostream>
using namespace std;

string scanQR();
bool checkLocation();
string getDate();
void markAttendance(string, string);
void saveToSheet(string, string);
void showCSV();

int main() {
    string studentID = scanQR();

    if (!checkLocation()) {
        cout << "Access denied (outside 50 meters)\n";
        return 0;
    }

    string date = getDate();

    markAttendance(studentID, date);
    saveToSheet(studentID, date);

    cout << "Attendance marked successfully\n";

    showCSV();   
    return 0;
}

