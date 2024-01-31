//Write a c++ program to calculate passing percentage on the basis of marks and failing percentage of students in a given students

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF STUDENTS :- ";
    cin >> n;

    int arr[n];
    int passed = 0;
    int failed = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter The Marks Of " << i + 1 << "th Student :- ";
        cin >> arr[i];
        if (arr[i] < 35)
        {
            failed = failed + 1;
        }
        else
        {
            passed = passed + 1;
        }
    }

    float passPercentage = (static_cast<float>(passed) / n) * 100;
    float failPercentage = 100 - passPercentage;

    cout << "Passing Percentage: " << passPercentage << "%" << endl;
    cout << "Failing Percentage: " << failPercentage << "%" << endl;

    return 0;
}