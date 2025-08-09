#include <iostream>
using namespace std;

int main() {
    int arr[100], n, runningSum[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    runningSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        runningSum[i] = runningSum[i - 1] + arr[i];
    }

    cout << "Running sum array:\n";
    for (int i = 0; i < n; i++)
        cout << runningSum[i] << " ";

    return 0;
}

