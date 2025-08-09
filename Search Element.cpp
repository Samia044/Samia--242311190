#include <iostream>
using namespace std;

int main() {
    int arr[100], n, searchNum;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the number to search: ";
    cin >> searchNum;

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchNum) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "-1 (Element not found)" << endl;

    return 0;
}

