//WAP to create a c++ 2d array of 5 students of their  5 subject marks, passing percentage,  failing percentage, subject topper, total marks /out off  for 4th class student

#include <iostream>

using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_SUBJECTS = 5;
const int MAX_MARKS = 100;  

int main() {

    int marks[NUM_STUDENTS][NUM_SUBJECTS];
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "Enter marks for student " << i + 1 << " in 5 subjects: ";
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            cin >> marks[i][j];
        }
    }

   

}