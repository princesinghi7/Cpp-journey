#include <iostream>
using namespace std;

int main() { 
    
    char grade = 'A'; //ASCII value of A is 65
    double price = 95.99;
    int newPrice = price; // explicit type casting
    int value = grade; // implicit type casting
    cout << newPrice << endl;
    cout << value << endl;


    return 0; 
}