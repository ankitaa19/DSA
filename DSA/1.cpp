#include <iostream>
using namespace std;

int main() {
    int a = 5;       
    int *ptr;        

    ptr = &a;        
    *ptr = 7;        

    cout << "The value of a after modification: " << a << endl;

   
}
