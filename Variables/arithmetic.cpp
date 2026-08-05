#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;  // cin user se input lene ke liye use hota hai 

    cout << "Enter second number: ";
    cin >> b;

    cout << "Addition = " << a + b << endl;  // cout print karta hai ky output hai 
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;

    return 0;
}