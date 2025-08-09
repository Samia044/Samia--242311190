#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "After swapping: x = " << x << ", y = " << y;
    return 0;
}

