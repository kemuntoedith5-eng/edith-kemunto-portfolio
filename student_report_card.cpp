#include <iostream>
using namespace std;

int main() {
    string name;
    float math, programming, computer, average;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter Mathematics mark: ";
    cin >> math;

    cout << "Enter Programming mark: ";
    cin >> programming;

    cout << "Enter Computer Studies mark: ";
    cin >> computer;

    average = (math + programming + computer) / 3;

    cout << "\n--- STUDENT REPORT CARD ---" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Average Mark: " << average << endl;

    if (average >= 70) {
        cout << "Grade: A" << endl;
    } else if (average >= 60) {
        cout << "Grade: B" << endl;
    } else if (average >= 50) {
        cout << "Grade: C" << endl;
    } else if (average >= 40) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: E" << endl;
    }

    if (average >= 50) {
        cout << "Status: PASS" << endl;
    } else {
        cout << "Status: FAIL" << endl;
    }

    return 0;
}