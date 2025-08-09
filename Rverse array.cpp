
#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n / 2; i++) {
        int key = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = key;
    }

    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
