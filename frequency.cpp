#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[100], n;
    map<int, int> freq;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    cout << "Element frequencies:\n";
    for (auto pair : freq) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}

