#include <iostream>
using namespace std;

int main() {
    cout << "Enter the radius of sphere: ";

    float radius, volume;
    cin >> radius;

    volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;

    cout << "Volume of sphere is: " << volume;

    return 0;
}