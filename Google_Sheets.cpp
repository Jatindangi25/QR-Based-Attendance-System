#include <fstream>
using namespace std;

void saveToSheet(string studentID, string date) {
    ofstream file("attendance.csv", ios::app);
    file << studentID << "," << date;
    file.close();
}
