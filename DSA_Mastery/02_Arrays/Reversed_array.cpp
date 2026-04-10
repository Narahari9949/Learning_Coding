#include <iostream>
#include <algorithm> // for swap
using namespace std;

// Function to reverse array
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    reverseArray(arr, n);  // function call

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


