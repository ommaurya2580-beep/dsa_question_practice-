#include<bits/stdc++.h>
using namespace std;
//

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int start = low + 1;
    int end = high;

    while (start <= end) {

        while (start <= high && arr[start] < pivot) {
            start++;
        }

        while (arr[end] > pivot) {
            end--;
        }

        if (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    swap(arr[low], arr[end]);
    return end;  
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int p = partition(arr, low, high);

    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
}
// main
int main() {
    vector<int> arr = {71,62,13,42,59,68,72,84,21};

    quickSort(arr, 0, arr.size() - 1);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
//