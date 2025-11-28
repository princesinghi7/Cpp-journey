#include <iostream>
using namespace std;

int main() { 
    int age = 19;
    char grade = 'A';
    float PI = 4.5f;
    double price = 95.99;


    bool isSafe = true;
    cout << sizeof (age)  << endl; 
    cout << sizeof (grade) << endl; 
    cout << sizeof (PI) << endl; 
    cout << sizeof (isSafe)  << endl;
    cout << sizeof (price)  << endl;

    
    return 0; 
}