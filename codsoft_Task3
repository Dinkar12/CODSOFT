#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Function to input student names and grades
void inputStudentGrades(vector<string>& names, vector<double>& grades) {
    string name;
    double grade;

    cout << "Welcome to the Student Grade Management System!" << endl;
    cout << "Enter 'done' for the student name to stop adding students." << endl;

    while (true) {
        cout << "Enter student name: ";
        getline(cin, name);

        if (name == "done") {
            break;
        }

        cout << "Enter grade for " << name << ": ";
        cin >> grade;
        cin.ignore(); // Ignore the newline character left in the buffer

        names.push_back(name);
        grades.push_back(grade);
    }
}

// Function to calculate the average grade
double calculateAverageGrade(const vector<double>& grades) {
    double totalGrade = 0.0;
    for (double grade : grades) {
        totalGrade += grade;
    }
    return totalGrade / grades.size();
}

// Function to find the highest grade
double findHighestGrade(const vector<double>& grades) {
    return *max_element(grades.begin(), grades.end());
}

// Function to find the lowest grade
double findLowestGrade(const vector<double>& grades) {
    return *min_element(grades.begin(), grades.end());
}

int main() {
    vector<string> names;
    vector<double> grades;

    inputStudentGrades(names, grades);

    // Check if there are any grades entered
    if (grades.empty()) {
        cout << "No grades entered. Exiting the program." << endl;
        return 0;
    }

    double averageGrade = calculateAverageGrade(grades);
    double highestGrade = findHighestGrade(grades);
    double lowestGrade = findLowestGrade(grades);

    // Display results
    cout << "----------------------------" << endl;
    cout << "Student Grade Summary" << endl;
    cout << "----------------------------" << endl;
    cout << "Number of students: " << names.size() << endl;
    cout << "Average grade: " << averageGrade << endl;
    cout << "Highest grade: " << highestGrade << endl;
    cout << "Lowest grade: " << lowestGrade << endl;

    return 0;
}
