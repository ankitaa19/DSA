// Write a c++ program to read display n numbers and find mean of n numbers using an array

#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive number of elements." << endl;
        return 1; 
    }
    double numbers[n];
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    double sum = 0;
    cout<<"[";
    for (int i = 0; i < n; ++i) {
        cout<<numbers[i]<<" ";
    } 
    cout<<"]"<<endl;
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }
    double mean = sum / n;   
    cout << "Mean: " << mean << endl;                                   
    return 0;
}