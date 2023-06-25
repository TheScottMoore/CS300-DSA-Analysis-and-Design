/*
Scott Moore
June 18, 2023
CS300 DSA: Analysis and Design
Project 2
  */

#include <iostream>
#include <fstream>
#include <unordered_map>
#include <algorithm>
#include <sstream>
using namespace std;

//Creates Course structure with the three attributes
struct Course {
    string courseNumber;
    string courseTitle;
    vector<string> preReqs;
};



// Function to print the course list in order
void printCourseList(const unordered_map<string, Course>& courseTable) {
    vector<Course> sortedCourses;
    sortedCourses.reserve(courseTable.size());

    for (const auto& course : courseTable) {
        sortedCourses.push_back(course.second);
    }

    sort(sortedCourses.begin(), sortedCourses.end(),
        [](const Course& a, const Course& b) {
            return a.courseNumber < b.courseNumber;
        });

    for (const auto& course : sortedCourses) {
        cout << course.courseNumber << " - " << course.courseTitle << endl;
    }
}



int main() {
    //Creates the hashtable to place the courses into
    unordered_map<string, Course> courseTable;

    string filename;
    int choice;
    string courseNumber;

   
     // Prints Course List
     printCourseList(courseTable);
}