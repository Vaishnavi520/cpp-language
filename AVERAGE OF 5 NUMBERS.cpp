#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    cout << "Enter the fourth number: ";
    cin >> num4;
    
    cout << "Enter the fifth number: ";
    cin >> num5;
    
    int avgnumber = (num1 + num2 + num3 + num4 + num5) / 5;
    cout << "Average of 5 numbers is " << avgnumber << endl;
    
    return 0;
}
