#include <iostream>
#include <vector>
using namespace std;

// Merge function to merge two sorted arrays
void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            res[k++] = a[i++];
        } else {
            res[k++] = b[j++];
        }
    }
    // Copy remaining elements of a, if any
    while (i < a.size()) {
        res[k++] = a[i++];
    }
    // Copy remaining elements of b, if any
    while (j < b.size()) {
        res[k++] = b[j++];
    }
}

// Merge sort function
void mergesort(vector<int>& v) {
    int n = v.size();
    if (n == 1) {
        return;  // Base case
    }

    // Split the array into two halves
    int n1 = n / 2, n2 = n - n1;
    vector<int> a(n1), b(n2);

    for (int i = 0; i < n1; i++)
        a[i] = v[i];
    for (int i = 0; i < n2; i++)
        b[i] = v[i + n1];

    // Recursively sort the two halves
    mergesort(a);
    mergesort(b);

    // Merge the sorted halves
    merge(a, b, v);

    // Print the current state of the merged array
    cout << "Merged array: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 1, 3, 0, 4, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n); // Create a vector from the array

    cout << "Original array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    mergesort(v); // Sort the array

    cout << "Sorted array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
